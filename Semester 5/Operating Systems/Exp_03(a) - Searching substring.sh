<</
Aim
To create a shell program to search for a substring in a given substring

Algorithm
1.Start
2.Get string and substring input
3.Run a loop to get the all character of the given string and compare those to the first character of the substring. 
4.Run again a loop to check from matching character to match all other characters to find substring.
5.Print the results
6.Stop
/

#!/bin/bash
echo "Enter a string: "
read x
echo "Enter a substring to search for: "
read y
strindex() {
  a="${1%%$2*}"
  [[ "$a" = "$1" ]] && echo "Substring $y not found" || echo "Substring found at index ${#a}"
}
strindex "$x" "$y"

<<Output
./substring.sh
Enter a string: 
hello world
Enter a substring to search for: 
world
Substring found at index 6
/