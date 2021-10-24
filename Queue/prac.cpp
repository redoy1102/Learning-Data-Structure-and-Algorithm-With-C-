#include<iostream>
#include<stdbool.h>
using namespace std;
#define CAPACITY 3
int myQueue[CAPACITY];
int R = -1, F = 0, TI = 0;

bool isEF(){
    if(CAPACITY !=  TI)
        return true;    //Empty
    return false;       //Full
}

void enqueue(int item){
    if ( isEF() )
    {
        R = (R + 1) % CAPACITY;

        myQueue[R] = item;
        TI++;
    }
    else
        cout<<"Queue is full"<<endl;
}
int dequeue(){
    if (isEF())
    {
        cout<<"The queue is empty"<<endl;
    }
    else{
        int frontItem = myQueue[F];
        myQueue[F] = -1;
        F = ( F+1 ) % CAPACITY;
        TI--;
        return frontItem;
    }
    
}

void print(){
    for (int i = 0; i < CAPACITY; i++)
    {
        cout<<myQueue[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    print();
    cout<<"Removed = "<<dequeue()<<endl;
    
    print();
    enqueue(40);
    print();
    enqueue(50);
    
}