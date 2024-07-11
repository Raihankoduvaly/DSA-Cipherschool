#include<iostream>
using namespace std;

int main()
{
    int password;

    cout<<"enter the password: "<<endl;
    cin>>password;

    while(password<999999)
    {
        cout<<"the password doesnot meet its requirment condition"<<endl;
        cin>>password;
    }
  cout<<"the user entered correct password"<<endl;

  return 0;
}