<</
Aim
To create a shell program that performs simple arithmetic calculations using switch case

Algorithm
1.Start
1.Read 2 numbers
2.Input choice
3.if choice equals 1:
Calculate res = a + b
else If choice equals 2
Calculate res = a - b
else if choice equals 3
Calculate res = a * b
else if choice equals 4
Calculate res = a / b
4.Output the results
5.Stop
/

# !/bin/bash
echo "Enter 2 numbers : "
read a
read b
echo "Choose:"
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"
read ch

case $ch in
  1)res=`echo $a + $b | bc`;;
  2)res=`echo $a - $b | bc`;;
  3)res=`echo $a \* $b | bc`;;
  4)res=`echo "scale=2; $a / $b" | bc`;;
esac
echo "Result : $res"

<<Output
>./calc.sh
Enter 2 numbers : 5
2
Choose:
1.Addition
2.Subtraction
3.Multiplication
4.Division
1
Result: 7
/
