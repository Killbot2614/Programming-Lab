// C++ Program to Check Whether a character is Vowel or Consonant.

// Five alphabets a, e, i, o and u are known as vowels. All other alphabets except these 5 alphabets are known as consonants.

#include <iostream>
using namespace std;
int main()
{
    char c;
    bool isLowercaseVowel,isUppercaseVowel;

    cin>>c;
    isLowercaseVowel=(c=='a'||
                      c=='e'||
                      c=='i'||
                      c=='o'||
                      c=='u');
    isUppercaseVowel=(c=='A'||
                      c=='E'||
                      c=='I'||
                      c=='O'||
                      c=='U');
    if(!isalpha(c))
      printf("Error! Non-alphabetic charcter.");
    else if(isLowercaseVowel||
            isUppercaseVowel)
            cout<<c<<" is a Vowel";
        else
            cout<<c<<" is a consonant";
            
    return 0;
}

// Input: Enter an alphabet: E
// Output: E is a Vowel
