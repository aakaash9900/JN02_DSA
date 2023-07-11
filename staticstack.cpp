#include <iostream>
#define SIZE 10
using namespace std;
class stack
{
int data[SIZE];
int top;
public:
stack()
{
    top=-1;
}
void push(int element)
{
    if (isfull()==1)
    cout<<"stack is full";
    data[++top]=element;
}
int pop()
{
    if (isEmpty()==1)
    return -1;
    else
    return data[top--];
}
int isEmpty()
{
    if (top==-1)
    return 1;
    else
    return 0;
}
int isfull()
{
    if (top==SIZE-1)
    return 1;
    else
    return 0;
}
int peek()
{
    if (isEmpty()==1)
    return -1;
    else
    return data[top];
}
};
int main()
{
    cout<<"stack implementation of stack";
    stack st;
    st.push(10);
    st.push(20);
    cout<<"\nstack is Empty?"<<st.isEmpty();
       cout<<"\nstack is full?"<<st.isfull();
          cout<<"\nFirst elemet?:"<<st.peek();
             cout<<"\nelement remove from stack?:"<<st.pop();
              cout<<"\nelement remove from stack?:"<<st.pop();
               cout<<"\nelement remove from stack?:"<<st.pop();
               return 0;
          
}
