#!/usr/bin/python3

def find(find_string):
   file = open("content.xml",'r')
   # reading whole content
   content = file.read()
   # spliting into lines
   content = content.split('>')

   # for every line in content do:
   for line in content:
      # for every word in line do:
      for word in line.split():
         # if the word matches the string to be searched, then print the whole line containing that word
         if(word == find_string):
            print(line)
   file.close()

string = input()
find(string)
