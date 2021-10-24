#include<iostream>
using namespace std;

int main(){
    int n, a[n];
    cout<<"Enter how many numbers do you want to add to your array = ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<endl<<"Array before insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}