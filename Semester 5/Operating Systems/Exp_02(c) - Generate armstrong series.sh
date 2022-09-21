<</
Aim
To create a shell program which generates armstrong series

Algorithm
1.Start
2.Search through all numbers within the range. 
3.For each number, determine the number of digits within it. 
4.Make the total number of decimal digits of the current number be the number "n". 
5.Calculate the sum of the" n-th" power of each digit. 
6.If the sum is greater than "K", then record the result.
7.Stop
/

#!/bin/bash
i=1
while((i<=500))
do
c=$i
d=$i
b=0
a=0
while((c>0))
do
a=$((c%10))
b=$((b + a*a*a))
c=$((c/10))
done
if((b==d)); then
echo "$i"
fi
i=$((i+1))
done

<<Output
./armstrong.sh
1
153
370
371
407
/