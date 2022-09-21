<</
Aim
To create a program to display pascals triangle

Algorithm
1.Start
2.Declare variables x, y, n, a, z, s
3.Enter the limit
4.Initialize the value of variables, s=n , x=0, y=0 , z=s
5.Do the following operations in loop
- x = 0 to n
- a= 1, x++
- z=s to 0
- print space
- z—-
- y = o to x
- print a
- a = a*(x-y)/(y+1)
- y= y+1
- go to next line
6.Repeat the process to n
7.Print the final required triangle
8.Stop
/

#!/bin/bash
echo -n "Enter the no. of rows: "
read NR
typeset -A arr
for i in `seq 0 $NR`;do
 arr[$i,0]=1
 arr[$i,$i]=1
 p=$((i-1))
  for ((j=1;j<$i;j++));do
   a=${arr[$((i-1)),$((j-1))]}
   b=${arr[$((i-1)),$j]}
   arr[$i,$j]=$((a+b))
 done
done
for ((i=0;i<=$NR;i++));do
for((j=0;j<=$i;j++))
do
  echo -n ${arr[$i,$j]} " "
done
 printf "\n"
done

<<Output
./pascal.sh
Enter the no. of rows: 4
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
/
