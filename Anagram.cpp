#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool Anagram(string A, string B)
{
    int n1, n2,i;
    //get lenth of both strings
    n1=A.length();
    n2=B.length();
    
    if(n1 != n2)  //if length of both word is not same then not a anagram
    {
        return false;
    }
    
    //sort both the strings
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    //compare sorted string
    for(i=0;i<n1;i++)
    {
        if(A[i]!=B[i])
        {
            return false;
        }
        return true;
    }
}

int main()
{
 string A,B;
 cout<<"enter first word\n";
 cin>>A;
 cout<<"enter second word\n";
 cin>>B;
 if (Anagram(A,B)==1)
     cout<<"words are anagram\n";
     else
     cout<<"words are not anagram\n";
     return 0;
 
}
