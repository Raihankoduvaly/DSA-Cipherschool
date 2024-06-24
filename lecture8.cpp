#include<iostream>
using namespace std;

int main()
{
    int a[9];
    int i;

    cout<<"give 9 integer as input:"<<endl;

    for(i=0;i<10;i++)
    {
        cin>>a[i];

    }
    cout<<"the 5 given inputs are:"<<endl;

    for ( i = 9; i>=0; i--)
    {
        cout<<a[1]<<"";
    }
    
    return 0;

}