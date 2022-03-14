#!/bin/sh
find \( -name "*.sh" \) -print | rev | cut -d"/" -f1 | rev | sed "s/\.[^.]*$//"
