import os
import subprocess

with open('temp.txt', 'r') as f:
    lines = f.readlines()

for line in lines:
    if line.startswith('#'):
        continue
    else:
        line = line.rstrip()
        subprocess.run(['git', 'add', line], shell=True)
        subprocess.run(['git', 'commit', '-m', 'Deleted: %s' % line.split('/')[-1], line], shell=True)
        print('Deleted: %s' % line.split('/')[-1])

