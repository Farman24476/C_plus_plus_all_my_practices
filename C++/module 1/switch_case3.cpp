#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    switch(a%2)
    {
        case 0:
        cout<<"Even"<<endl;
        break;
        default:
        cout<<"Odd"<<endl;
    }
    return 0;
}