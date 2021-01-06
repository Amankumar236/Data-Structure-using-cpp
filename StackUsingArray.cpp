#include <iostream>
using namespace std;

#define SIZE 5 //predefined size
int A[SIZE];
int top = -1; //initially when the stack is empty the top value of stack is -1

bool isempty()
{
  if(top==-1)     //if empty it's -1 ..i told you before right?
  return true;
  else
  return false;
}


void push(int value)
{
  if(top==SIZE-1)      // size-1 is equal to the last index of the stack ..now if we try to push it will warn us with cute line..
  {    cout<<"Stack is full!\n";
  }
   else
  {
    top++;
    A[top]=value;   //push the value at top
  }
}


void pop()
{
 if(isempty())
  cout<<"Stack is empty!\n";
 else
  top--;
}


void show_top()
{
 if(isempty())
  cout<<"Stack is empty!\n";
 else
  cout<<"Element at top is: "<<A[top]<<"\n";

}


void displayStack()
{
  if(isempty())
 {
    cout<<"Stack is empty!\n";
 }
 else
 {
  for(int i=0 ; i<=top; i++)  // loop till top 
    cout<<A[i]<<" ";
   cout<<"\n";

  }

}

int main()
{

 int choice, flag=1, value;
 while( flag == 1)
 
 {
 cout<<"\n1.PUSH 2.POP 3.SHOW_TOP 4.DISPLAY_STACK 5.EXIT\n";
 cin>>choice; switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
          break;
   case 2: pop();
           break;
     case 3: show_top();
             break;
        case 4: displayStack();
                break;
         case 5: flag = 0;
                break;
 }
 }
  return 0;
}
