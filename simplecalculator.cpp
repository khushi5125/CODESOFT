#include<iostream>
using namespace std;
int main()
{
    char op;
    float num1,num2;
    cout<< "Enter the value of two operands:"<<endl;
    cin>>num1>>num2;
    cout<<"Enter '+' for addition"<<endl;
    cout<<"Enter '-' for substraction"<<endl;
    cout<<"Enter '*' for multiplication"<<endl;
    cout<<"Enter '/' for division"<<endl;
    cout<<"Enter operator:(+,-,*,/):";
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        break;

        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        break;

        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        break;

        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
        break;

        default:
        //if operator is other than (+,-,*,/) error massage is shown
        cout<<"Error!! (please Enter valid operator)"<<endl;
        

           
    }
    return 0;

}