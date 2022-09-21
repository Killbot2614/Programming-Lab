<</
Aim
To create a shell program to check string anagram

Algorithm
1.Start
2.Input the two strings.
3.Create an array for both the strings.
4.Traverse both the strings and store the count of the alphabets of both the strings in respective arrays.
5.Check if both the arrays are equal.
6.If both the arrays are equal, return true. Else, return false.
7.Stop
/

#!/bin/bash
function prep(){
  fold -w1 <<< "${1//[^[:alnum:]]/}"|tr '[:upper:]' '[:lower:]'|sort|tr -d '\n'
}
function isAnagram() {
  a=$(prep "$1")
  b=$(prep "$2")
  [[ $a = $b ]] && echo "yes"||echo "no"
}
echo "Enter word 1:"
read x
echo "Enter word 2:"
read y
isAnagram $x $y

<<Output
./anagram.sh
Enter word 1:
cat
Enter word 2:
cot
no
/