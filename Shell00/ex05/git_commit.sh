#!/bin/bash
git log --pretty=oneline -5 | cut -d" " -f1
