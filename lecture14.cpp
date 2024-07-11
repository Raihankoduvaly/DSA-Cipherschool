#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c;
    c =a+b;
    return c;
}

int main()
{
    int a,b;
    int sum_add;
    a=3;
    b=6;
    
    sum_add= sum(a,b);
    
    cout<<sum_add;

    return 0;
     

}