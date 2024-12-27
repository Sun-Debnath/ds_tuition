#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        // char name[100];
        int roll;
        double cgpa;

        Student( int roll, double cgpa)
        {
            // this->name[100] = name;
            this->roll = roll;
            this->cgpa = cgpa;
        }

};
int main()
{
    // int a;
    Student s1(10, 3.67);
    
    s1.roll;
    // s1.roll = 10;
    // s1.cgpa = 3.67;
    cout<<s1.roll<<" "<<s1.cgpa<<endl;
    return 0;
}