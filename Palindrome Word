#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

bool palindrome(string a ){
    
    int i ,j ;
    i=0;
    j=a.length()-1;

 
 while(i<j)
 {
     while(i<j && isalnum(a[i])==0)
     i++;
     while(i<j && isalnum(a[j])==0)
     j--;
     
     
     if( toupper(a[i])!=toupper(a[j]) )
     {
         return false;
     }
     else
     {
       i++;
       j--;
     }
    
 }
      return true;
     
     
 }
 
 
 int main()
 {
     string a;
     getline(cin,a);
    
     
     if(palindrome(a)==1)
     cout<<"YES It is a palindrome word\n";
  else
   cout<<"NO sorry!\n";

 return 0;
     
     
 }
