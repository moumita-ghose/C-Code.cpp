/* 
AUTHOR : MOUMITA GHOSE
DATE : 09th April 2024
*/
#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter 2 integer number : "<<endl;
    cin>>num1>>num2;
    int sum=num1+num2;
    int sub=num1-num2;
    int mul=num1*num2;
    float div=(float)num1/num2;

    cout<<"\n\nSUM IS : "<<sum<<endl<<"SUBSTRACTION IS : "<<sub<<endl<<"MULTIPLICATION IS : "<<mul<<endl<<"DIVISION : "<<div<<endl;

    return 0;
}
