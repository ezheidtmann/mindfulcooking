#!/bin/bash

drush sql-drop

drush si minimal \
  --account-name=admin \
  --account-pass=asdf \
  --account-mail=evan.heidtmann@gmail.com \
  --site-name="PAT Membership Database" \
  --site-mail=evan.heidtmann@gmail.com

drush en patdb_types
drush en patdb_import

echo "Next step: Load an MDB! Ex: drush ipm ~/pat.mdb"

