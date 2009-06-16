#!/bin/bash

# Rebuilds empty directories which are lost by HG but required by SVN

for d in `find . -type d | grep /.svn$`;
do
        # -p to make $d/tmp parent directory
        `mkdir -p $d/tmp/prop-base`
        `mkdir $d/tmp/props`
        `mkdir $d/tmp/text-base`
done
