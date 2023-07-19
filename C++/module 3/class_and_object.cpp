#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;

};
int main()

{
   Student karim;
   karim.roll=10;
   karim.cls=3;
   karim.section='A';
   char nm1[100]="Famman";
   strcpy(karim.name,nm1);

   Student rahim;
   rahim.roll=12;
   rahim.cls=5;
   rahim.section='B';
   char nm2[100]="Rahim al madani";
   strcpy(rahim.name,nm2);

   cout<<karim.cls;

    return 0;
}