<</
Aim
To create a shell program to display date and time

Algorithm
1.Start
2.Declare the necessary variables
3.Apply formatting
4.Display the date and time
5.Stop
/

date
date +"%m-%d-%y"
var=$(date)
var=`date`
echo "$var"

<<Output
>./date.sh
Wed Sep 21 14:00:00 UTC 2022
09-21-22
/