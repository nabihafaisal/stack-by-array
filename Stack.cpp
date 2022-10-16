#include <iostream>
using namespace std;
class Stack
{

public:
  int stack[8];
  int top;
  Stack(){
     top=-1;
  }
  int push(int data)
  {
    if (top <= 8)
    {
      top++;
      stack[top] = data;
      // printf("%u", data);
      //  cout<<data;
    }
    else

      return -1; 
      
  }

  int pop(int *ret)
  {
    if (top != -1)
    {
      *ret = stack[top];
      top--;
      return 0;
      
    }
    else
    return -1;
  }
  void display(){
    if (top==-1)
    {
      cout<<"underflow"<<endl;
    }
    else
    {
      for (int i = 0; i <= top; i++)
      {
        cout<<stack[i]<<endl;
        cout<<"\n";
      }
      
    }
    

  }
};

int main()
{
 Stack S;
 S.push(47);
 S.push(44);
 S.push(46);
 int r=1;
 S.pop(&r);
 S.display();
  return 0;
}

