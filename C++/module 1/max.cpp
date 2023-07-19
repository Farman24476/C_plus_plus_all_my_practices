#include<iostream>
using namespace std;
int my_max(int a,int b)
{
    if(a<b) return b;
    else return a;
}
int main()
{
   int a,b;
   cin>>a>>b;
   int mx=my_max(a,b);
   cout<<mx<<endl;
    return 0;
}