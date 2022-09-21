<</
Aim
To create a shell program which converts filename from uppercase to lowercase and vice versa

Algorithm
1.Start
2.Read path to file
3.Read filename
4.Get user input for case conversion
5.Rename file based on input
6.Stop
/

#!/bin/bash
echo "Enter path to file: "
read x
cd $x
echo "Enter filename: "
read y
echo "1.Uppercase to lowercase"
echo "2.Lowercase to uppercase"
read ch
case $ch in
  1) mv -- "$y" "${y,,}";;
  2) mv -- "$y" "${y^^}";;
esac
exit

<<Output
>ls
hello.c
case.sh
>./case.sh
Enter path to file:
/root/
Enter filename:
hello.c
1.Uppercase to lowercase
2.Lowercase to uppercase
>2
>ls
HELLO.C
case.sh
>./case.sh
Enter path to file:
/root/
Enter filename:
HELLO.C
1.Uppercase to lowercase
2.Lowercase to uppercase
>1
>ls
hello.c
case.sh
/