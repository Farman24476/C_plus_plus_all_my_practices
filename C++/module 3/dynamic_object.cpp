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
    char name[100]="Rahim Ullahh Sha";
    Student rahim(44,'A',10,name);
    Student* rahim=new Student(44,'A',10,name);
    (*rahim).roll=55;
    // int *a-new int;
    // *a=10;
    // cout<<*a<<endl;
    cout<<(*rahim).roll<<endl;
    cout<<(*rahim).section<<endl;
    cout<<(*rahim).cls<<endl;
    cout<<(*rahim).name<<endl;
    delete rahim;
   
    return 0;
}