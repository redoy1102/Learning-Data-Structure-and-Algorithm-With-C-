#include<iostream>
using namespace std;
class A{
    public:
    int insert(){
        int n, a[n], pos, item, i;
        cout<<"Enter the array size = ";
        cin>>n;
        cout<<"Enter your array values: ";
        for ( i = 0; i < n; i++)
        {
            cout<<"Enter no - "<<i+1<<" value.";
            cin>>a[i];
        }
        cout<<"Array before insertion = ";
        for ( i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl<<endl<<endl<<"Enter which number you want to add = ";
        cin>>item;
        cout<<"Enter the position = ";
        cin>>pos;
        n++;

        for ( i = (n-1); i >= pos; i--)
        {
            a[i] = a[i-1];
        }
        a[pos-1] = item;

        cout<<"Array after insertion - ";
        for ( i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
    }
};
int main(){
    A obj;
    obj.insert();

    return 0;
}