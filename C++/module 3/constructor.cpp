#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int r,int s,int c,char* n)
    {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,n);


    }

};
int main()

{
   Student rahim(12,'A'.7,"Rahim ullah");

   cout<<rahim.cls<<endl;
   cout<<rahim.roll<<endl;
   cout<<rahim.section<<endl;
   cout<<rahim.name<<endl;


    return 0;
}