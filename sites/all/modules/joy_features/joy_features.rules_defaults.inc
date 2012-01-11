<?php
/**
 * @file
 * joy_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function joy_features_default_rules_configuration() {
  $items = array();
  $items['1'] = entity_import('rules_config', '{ "1" : {
      "LABEL" : "Notify Eve of new content she did not create",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "NOT data_is" : { "data" : [ "site:current-user:name" ], "value" : "Eve" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "eve@mindfulcooking.org",
            "subject" : "mindfulcooking.org activity: \\"[node:title]\\"",
            "message" : "Posted by [node:author]:\\r\\n\\r\\n[node:title]\\r\\n\\r\\n[node:body]\\r\\n\\r\\n[site:url]node\\/[node:nid]"
          }
        }
      ]
    }
  }');
  $items['2'] = entity_import('rules_config', '{ "2" : {
      "LABEL" : "Notify eve of new comments she didn\'t make",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : [ "comment_presave" ],
      "IF" : [
        { "NOT data_is" : { "data" : [ "comment:author:name" ], "value" : "Eve" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "eve@mindfulcooking.org",
            "subject" : "mindfulcooking.org activity: \\"[comment:subject]\\"",
            "message" : "Posted by [comment:author]: \\r\\n\\r\\n[comment:subject]\\r\\n\\r\\n[comment:body]\\r\\n\\r\\n[site:url]node\\/[comment:node:nid]#comment-[comment:cid]\\r\\n"
          }
        }
      ]
    }
  }');
  $items['3'] = entity_import('rules_config', '{ "3" : {
      "LABEL" : "Trust user when their comment is approved",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "php", "rules", "comment" ],
      "ON" : [ "comment_update" ],
      "IF" : [
        { "php_eval" : { "code" : "return ($comment-\\u003estatus \\u0026\\u0026 !($comment_unchanged-\\u003estatus));" } },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "6" : "6", "4" : "4", "5" : "5" } },
            "operation" : "OR"
          }
        },
        { "NOT user_has_role" : {
            "account" : [ "comment:author" ],
            "roles" : { "value" : { "6" : "6", "4" : "4", "5" : "5" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "user_add_role" : {
            "account" : [ "comment:author" ],
            "roles" : { "value" : { "6" : "6" } }
          }
        },
        { "drupal_message" : { "message" : "The user \\"[comment:author]\\" is now listed as a trusted user." } }
      ]
    }
  }');
  $items['4'] = entity_import('rules_config', '{ "4" : {
      "LABEL" : "Block user when their comment is deleted by admin",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : [ "comment_delete" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "operation" : "OR"
          }
        },
        { "NOT user_has_role" : {
            "account" : [ "comment:author" ],
            "roles" : { "value" : { "6" : "6", "4" : "4", "5" : "5" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "user_block" : { "account" : [ "comment:author" ] } },
        { "drupal_message" : { "message" : "User \\"[comment:author]\\" has been blocked." } }
      ]
    }
  }');
  return $items;
}
