<</
Aim
To create a shell program which displays metadata information about a file

Algorithm
1.Start
2.Read path to file
3.Read filename
4.Display the file's metadata
- Size
- Device
- Access
- Modify 
- Change
6.Stop
/

#!/bin/bash
echo "Enter path to file: "
read r1
cd $r1
echo "Enter filename: "
read r2
stat $r2

<<Output
>./metadata.sh
Enter path to file:
/root/
Enter filename:
hello.c
File: hello.cd
Size: 76 Blocks: 8 10 Block: 4096 regular file
Device: eh/14d
Access: (0644/-rw-r--r--) Uid:(0/root) Gid:(0/root)
Access: 2020-07-03 14:45:56.000
Modify: 2020-07-03 14:45:56.000
Change: 2022-07-03 15:45:56.000
/