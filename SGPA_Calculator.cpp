#include<bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
public:
    void set_name(string s)
    {
        name = s;
    }
    string get_name()
    {
        return name;
    }
    void FirstSemester()
    {
        double sum =0;
        int c1,c2,b1,m1,p1,p2,h1,e1;
        cout<<"Select your Course and give number "<<endl;
        cout<<"CSE-101 : ";
        cin>>c1;
        sum += calculateGradePoint(c1)*3;
        cout<<"CSE-102 : ";
        cin>>c2;
        sum += calculateGradePoint(c2)*1.5;
        cout<<"BAN-102 : ";
        cin>>b1;
        sum += calculateGradePoint(b1)*2;
        cout<<"MAT-101 : ";
        cin>>m1;
        sum += calculateGradePoint(m1)*3;
        cout<<"PHY-101 : ";
        cin>>p1;
        sum += calculateGradePoint(p1)*3;
        cout<<"PHY-102 : ";
        cin>>p2;
        sum += calculateGradePoint(p2)*1.5;
        cout<<"BHC-101 : ";
        cin>>h1;
        sum += calculateGradePoint(h1)*3;
        cout<<"ENG-101 : ";
        cin>>e1;
        sum += calculateGradePoint(e1)*2;
        double sgpa = sum/19;
        cout<<"Your SGPA = ";

        cout<<setprecision(3)<<sgpa;
    }
    void SecondSemester()
    {
        double sum =0;
        int c3,c4,e1,e2,m2,c5;
        cout<<"Select your Course and give number "<<endl;
        cout<<"CSE-111 : ";
        cin>>c3;
        sum += calculateGradePoint(c3)*3;
        cout<<"CSE-112 : ";
        cin>>c4;
        sum += calculateGradePoint(c4)*1.5;
        cout<<"EEE-101 : ";
        cin>>e1;
        sum += calculateGradePoint(e1)*3;
        cout<<"EEE-102 : ";
        cin>>e2;
        sum += calculateGradePoint(e2)*1.5;
        cout<<"MAT-111 : ";
        cin>>m2;
        sum += calculateGradePoint(m2)*3;
        cout<<"CSE-103 : ";
        cin>>c5;
        sum += calculateGradePoint(c5)*3;
        double sgpa = sum/15;
        cout<<"Your SGPA = ";

        cout<<setprecision(3)<<sgpa;

    }
    double calculateGradePoint(double marks)
    {
        if (marks >= 80)
        {
            return 4.00;       // A+
        }
        else if (marks >= 75)
        {
            return 3.75;  // A
        }
        else if (marks >= 70)
        {
            return 3.50;  // A-
        }
        else if (marks >= 65)
        {
            return 3.25;  // B+
        }
        else if (marks >= 60)
        {
            return 3.00;  // B
        }
        else if (marks >= 55)
        {
            return 2.75;  // B-
        }
        else if (marks >= 50)
        {
            return 2.50;  // C+

        }
        else if (marks >= 45)
        {
            return 2.25;  // C
        }
        else
        {
            return 0.0;   // Fail
        }
    }


};
int main()
{
    string name;
    cout<<"Enter your name : ";
    getline(cin, name);

    student s1;
    s1.set_name(name);
    cout<<"Name of the student : "<<s1.get_name()<<endl;
    cout<<"Choose your Semester : ";
    char c;
    cin>>c;
    if(c == '1')
    {
        s1.FirstSemester();
    }
    else if(c == '2')
    {
        s1.SecondSemester();
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }

    return 0;

}


