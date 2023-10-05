//Basic Calculator using switch case
#include<iostream>
using namespace std;

int main(){
    char op;
    cout<<"Enter the operator(+,-,/,*):  ";
    cin>>op;

    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    switch(op){
        case '+':
        cout<<"Sum: "<<a+b;
        break;

        case '-':
        cout<<"Difference: "<<a-b;
        break;

        case '*':
        cout<<"Product: "<<a*b;
        break;

        case '/':
        cout<<"Divison: "<<a/b;
        break;
    }
}