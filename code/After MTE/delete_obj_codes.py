#!/usr/bin/python3

import os
import re
files = os.listdir('.')
pattern = "^[a-zA-Z_]*[a-zA-Z_]$"

for file in files:
   is_present = re.search(pattern,file)
   if(is_present is not None):
      print("deleting ",file)
      os.remove(file)

