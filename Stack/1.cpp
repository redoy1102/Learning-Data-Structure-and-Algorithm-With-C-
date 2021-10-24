#include<iostream>
using namespace std;
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;   //cz our stack is zero

void push(int x){
    if (top < (CAPACITY -1))
    {
        top++;  //2
        stack[top] = x;
        cout<<"Successfully added = "<<x<<endl;
    }
    else{
        cout<<x<<" can't be added cz exception! No spaces"<<endl;
    }
}
int pop(){
    if (top >= 0)
    {
        int val = stack[top];
        top--;
        return val;
    }
    cout<<"Exception! No value found.";
    return -1;
}
int peek(){
    if (top >= 0)
    {
        cout<<"Top value of this stack = "<<stack[top]<<endl;
    }
    else{
        cout<<"Exception! No value!"<<endl;
    }
    return -1;
}
int main(){
    cout<<"Hey"<<endl;
    peek();
    push(10);
    push(20);
    push(30);
    push(40);
    push(40);
    push(40);
    peek();
    cout<<"Top value = "<<pop()<<endl;
}