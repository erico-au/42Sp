#!/bin/sh
git status --ignored --untracked-files=all -s | cut -c 4-

