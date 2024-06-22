#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"plese enter your marks for evaluation"<<endl;
    cin>>marks;

    if(marks>90)
    {
        cout<<"A";
    }

     if(marks>80)
    {
        cout<<"B";
    }
     if(marks>70)
    {
        cout<<"C";
    }
    else
    {
        cout<<"pass";
    }


}