//  C Program to Check whether an Alphabet is Vowel or Consonant

// Step 1: Start
// Step 2: Declare character type variable ch
// Step 3: Read ch from User
// Step 4: // Checking both lower and upper case vowels.
        
//        IF (ch == 'a' || ch == 'A' ||
//	            ch == 'e' || ch == 'E' ||
//	            ch == 'i' || ch == 'I' ||
//	            ch == 'o' || ch == 'O' ||
//	            ch == 'u' || ch == 'U' )
	            
//            Print "Vowel"

//        ELSE

//            Print "Consonant"            
//Step 5:  Stop

#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||
       ch=='e'||ch=='E'||
       ch=='i'||ch=='I'||
       ch=='o'||ch=='O'||
       ch=='u'||ch=='U')
    {
        printf("%c is a vowel.",ch);
    }   
    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("%c is Consonant.",ch);
    }
    else
    {
        printf("%c is not an alphabet.",ch);
    }
    return 0;
}

// Input: Enter an alphabet: E
// Output: E is a vowel.
