#include <iostream>
using namespace std;

//Function to Rotate the array
void RotArray(int a[],int n,int k)
{
 int b[n],i; //2nd array in which rotated value will be stored

 //Moving each element by k positions
 for(i=0;i<n;i++)
  b[(i+k)%n]=a[i];  //formula for copying rotated array in array b 

 //Display Rotated Array
 for(i=0;i<n;i++)
  cout<<b[i]<<" ";

}
//Main Function
int main()
{
 int n,i,k;
 //input: n - size of array, Rotation of n by k posistion..
 cout<<"Enter values n & k \n";
 cin>>n>>k;
 //Declaring array
 int a[n];
 //input elements of array
 cout<<"Input Array Elements\n";
 for(i=0;i<n;i++)
 cin>>a[i];
 //calling Rotation Function
 RotArray(a,n,k);

return 0;
}

//time complexity: O(n)
