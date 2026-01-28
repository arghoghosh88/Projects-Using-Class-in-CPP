#include<bits/stdc++.h>
using namespace std;
float pi = 3.1416;
class calculator
{
public:
    double add(double a, double b)
    {
        return a+b;
    }
    double substraction(double a, double b)
    {
        return a - b;
    }
    double multiplication(double a, double b)
    {
        return a*b;
    }
    double division(double a, double b)
    {
        if(b == 0)
        {
            cout<<"It is not possible to divide"<<endl;
        }
        else
        {
            return a/b;
        }
    }
    double toRadian(double angel)
    {
        return angel*((double)pi/180);
    }
    double toSine(double angel)
    {
        return sin(toRadian(angel));
    }
    double toCos(double angel)
    {
        return cos(toRadian(angel));
    }
    double toTan(double angel)
    {
        return tan(toRadian(angel));
    }
    double toCot(double angel)
    {
        return 1/tan(toRadian(angel));
    }
    double toSec(double angel)
    {
        return 1/cos(toRadian(angel));
    }
    double toCosec(double angel)
    {
        return 1/sin(toRadian(angel));
    }
};

int main()
{
    calculator c;
    double a,b;

    while(true)
    {

        cout<<"-------<Simple Calculator>------"<<endl;
        cout<<"Choose a number to calculate"<<endl;
        cout<<"---<0>--- if for exit"<<endl;
        cout<<"---<1>---- is for Addition"<<endl;
        cout<<"---<2>---- is for Subtraction"<<endl;
        cout<<"---<3>---- is for Multiplication"<<endl;
        cout<<"---<4>---- is for Division"<<endl;
        cout<<"---<5>---- is for Sin"<<endl;
        cout<<"---<6>---- is for Cos"<<endl;
        cout<<"---<7>---- is for Tan"<<endl;
        cout<<"---<8>---- is for Cot"<<endl;
        cout<<"---<9>---- is for Sec"<<endl;
        cout<<"---<10>---- is for Cosec"<<endl;

        int num;
        cout<<"Enter your Choice : ";
        cin>>num;
        cout<<endl;


        double num1, num2;
        if (num == 0)
        {
            break;
        }


        if (num >= 1 && num <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

        }
        else if(num >= 5 && num <= 10)
        {
            cout <<"Enter an angle in degrees: ";
            cin >>num1;
        }
        else
        {
            cout<<"Invalid choice!"<<endl;
            continue;
        }

        switch(num)
        {

        case 1:
            cout <<num1<< " + " << num2 <<" = " <<c.add(num1, num2) <<endl;
            break;
        case 2:
            cout <<num1 << " - " << num2 << " = " << c.substraction(num1, num2)<<endl;
            break;

        case 3:

            cout<<"Multiplication of two number = "<<c.multiplication(num1, num2)<<endl;
            break;

        case 4:

            cout<<"Sub of two number = "<<c.division(num1, num2)<<endl;
            break;

        case 5:
            cout<<"sin("<<num1<<") = "<<setprecision(2)<<c.toSine(num1)<<endl;
            break;

        case 6:
            cout<<"cos("<<num1<<") = "<<setprecision(2)<<c.toCos(num1)<<endl;
            break;

        case 7:
            cout<<"tan("<<num1<<") = "<<setprecision(2)<<c.toTan(num1)<<endl;
            break;

        case 8:
            cout<<"cot("<<num1<<") = "<<c.toCot(num1)<<endl;
            break;

        case 9:
            cout<<"sec("<<num1<<") = "<<setprecision(2)<<c.toSec(num1)<<endl;
            break;

        case 10:
            cout<<"cosec("<<num1<<") = "<<c.toCosec(num1)<<endl;
            break;

        }


    }


}

