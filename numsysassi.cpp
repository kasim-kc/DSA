#include<iostream>
using namespace std;

int main(){

    // Print the sum of First 5 Decimal Numbers in Binary Format..
    // int sum=0;
    // for(int i=1;i<=5;i++){
    //     int n=i;
    //     int ans=0;
    //     int power=1;
    //     while(n!=0){                                       // ANSWER IS DIFFERENT QKI QUESTION HI GALAT SAMJHA
    //         int bit=n&1;
    //         ans=(bit*power)+ans;
    //         power*=10;
    //         n=n>>1;
    //     }
    //      sum=sum|ans;
       
    // }
    
    // cout<<"The Binary Sum is: "<<sum<<endl;


    // Given a natural number, Count the number of 0's in binary representation of that number..
    // int num;
    // cout<<"Enter the number: ";
    // cin>>num;

    // int n=num;
    // int count=0;
    // while(n!=0){
    //     if(n&1){
    //         n=n>>1;
    //     }
    //     else{
    //         count++;
    //         n=n>>1;
    //     }
    // }
    // cout<<"The Number of 0's in binary representation of "<<num<<" are: "<<count<<endl;

    // Given two binary numbers, return the greatest of these numbers in decimal format..
    int a,b;
    cout<<"Enter two binary numbers: ";
    cin>>a;
    cin>>b;
    
    int num1=0,num2=0;
    int power=1,power1=1;
    while(a!=0 && b!=0){
        int digit=a%10;
        num1=(digit*power)+num1;
        power*=2;
        a/=10;

        int digit1=b%10;
        num2=(digit1*power1)+num2;
        power1*=2;
        b/=10;
    }
    if(num1>num2){
        cout<<"The greater number is "<<num1;
    }
    else{
         cout<<"The greater number is "<<num2;
    }
}