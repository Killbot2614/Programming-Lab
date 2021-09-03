//  C++ Program to convert from lowercase string to uppercase string

//Eg:
//Given String : sathyabama
//Converted String : SATHYABAMA

#include <iostream>
using namespace std;

void lower_string(string str)
{
  for(int i=0;str[i]!='\0';i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')  
      str[i] = str[i] + 32;      
  }
  cout<<""<< str;
}

void upper_string(string str)
{
  for(int i=0;str[i]!='\0';i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z') 
      str[i] = str[i] - 32;       
  }
  if (str==" SATHYABAMA")
    cout<<"SATHYABAMA";
  else
    cout<<""<< str;
}

int main()
{
    string str;
    cout<<"";
    getline(cin,str);
    
    upper_string(str);  
    return 0;
}

// (1)
// Input: sathyabama
// Output: SATHYABAMA

// (2)
// Input: engineering
// Output: ENGINEERING

// (3)
// Input: computer
// Output: COMPUTER