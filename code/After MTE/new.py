import os

filesList = list()
for (dirpath, dirnames, filenames) in os.walk('.'):
    for file in filenames:
        f = os.path.join(dirpath,file)
        f = f[2:]
        if not 'vscode' in f:
            filesList += [f] 

for elem in filesList:
    print(elem)