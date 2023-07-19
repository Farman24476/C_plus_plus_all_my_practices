#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int num[n];
   for(int i=0;i<=n;i++)
   {
    cin>>num[i];

   }

   int mx=max(num.begin(),num.end());
   for(int i=0;i<n;i++)
   {
    if(num[i]>max)
    {
        max=num[i];
    }
   }
   cout<<mx<<endl<<" ";
    return 0;
}