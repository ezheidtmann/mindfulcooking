#!/bin/bash

drush --yes sql-drop

drush --yes si minimal \
  --account-name=admin \
  --account-pass=asdf \
  --account-mail=evan.heidtmann@gmail.com \
  --site-name="PAT Membership Database" \
  --site-mail=evan.heidtmann@gmail.com

drush --yes en contextual toolbar overlay

drush --yes en patdb_structure
drush --yes en patdb_views
drush --yes en patdb_misc
drush --yes en patdb
drush --yes en patdb_import


echo "Next step: Load an MDB! Ex: drush ipm ~/pat.mdb"

