#include<iostream>
#include<stdbool.h>
using namespace std;
#define CAPACITY 5

int mQueue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;

bool isFullEmpty(){
    if(totalItem == CAPACITY)
        return true;    //Full
    else
        return false;   //Empty
}

void enqueue(int item){
    if ( isFullEmpty() )
    {
        cout<<"Sorry! Our queue is full."<<endl;
    }
    else{
        rear++;
        mQueue[rear] = item;
        totalItem++;
        cout<<item<<" is added"<<endl;
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
}
