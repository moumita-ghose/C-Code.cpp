/* 
author : MOUMITA GHOSE
DATE : 09th April 2024
*/

#include<iostream>
using namespace std;
int main()
{
    /* process - 1 :______________to declare and assign the value in the variable*/
    int num1;
    int num2;
    float num3;
    char c;
    num1 =100;
    num2=200;
    num3=31.20000;
    c='A';
    cout<<"NUmber one : "<<num1<<endl<<"NUMBER 2 = "<<num2<<endl<<"NUMBER 3 = "<<num3<<endl<<"character is : "<<c<<endl;
    /*  Get User input from the user */

    char name[100];
    cout<<"\n\n\n Enter your name Here:\n";
    cin.getline(name,100);  // getline() is used to read a string with space
    cout<<"WELCOME!!"<<name<<" wish you a good day....!!!"<<endl;
    return 0;
}
