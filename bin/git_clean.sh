#!/bin/bash

git status
bash ext/gerefi/misc/git_scripts/git_super_clean.sh

git status
cd ext/gerefi

bash misc/git_scripts/git_super_clean.sh
git status