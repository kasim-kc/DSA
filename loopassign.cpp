#include<iostream>
using namespace std;

int main(){
    // Write a Program to calculate the factorial of a number..
    // int n;
    // cin>>n;
    
    // int fact=1;
    // while(n>0){
    //     fact*=n;
    //     n--;
    // }
    // cout<<fact<<endl;
   
   // Write a program to find sum of all n numbers..
    // int n;
    // cin>>n;

    // int i=1;
    // int sum=0;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    // cout<<sum<<endl;

    //Write a program to reverse a given number..
    // int n;
    // cin>>n;

    // int reverse=0;
    // while(n>0){
    //     int lastdigit=n%10;
    //     reverse=reverse*10+lastdigit;
    //     n/=10;
    // }
    // cout<<reverse<<endl;


    // PATTERN 'X'
    // int n;
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(j==(n+1-i) || j==i){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;

    // Write a Program to print all Armstrong numbers between 100 to 500..
    
    // for(int i=100;i<=500;i++){
    //     int value=i;
    //     int sum=0;
    //     while(value>0){
    //         int dig=value%10;
    //         sum+=(dig*dig*dig);
    //         value/=10;
    //     }
    //     if (sum==i){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         continue;
    //     }
    //     }

    
    // PLUS PATTERN
    // int n;
    // cin>>n;
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==(n+1)/2 || j==(n+1)/2){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // PATTERN "ALPHABET DIAMOND"
    // int n;
    // cin>>n;
    
    
    // for(int i=1;i<=(n+1)/2;i++){
    //     for(int j=1;j<=(n-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+(i-1);j++){
    //         char ch='A'+j;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }
    // int value=1;
    // for(int i=((n+1)/2)+1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<(n-2*value);j++){
    //         char ch='A'+j;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    //     value=value+1;
    // }


    // ANOTHER OR MORE CORRECT WAY TO ALPHABET DIAMOND PATTERN
    // int size=5;
    // int alpha=65;
    // int num=0;

    //     //upside pyramid
    // for(int i=1;i<=size;i++){
    //     //printing spaces
    //     for(int j=size;j>i;j++){
    //         cout<<" ";
    //     }
    //     //printing alphabets
    //     for(int k=0;k<i*2-1;k++){
    //         cout<<((char)(alpha+num++));
    //     }
    //     //set the number to 0
    //     num=0;
    //     cout<<endl;
    // }    
    //     //downside pyramid
    // for(int i=1;i<=size-1;i++){
    //     //printing spaces
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     //printing alphabets
    //     for(int k=(size-i)*2-1;k>0;k--){
    //         cout<<((char)(alpha+num++));
    //     }
    //     //set num=0
    //     num=0;
    //     cout<<endl;
    // }


    
   
    
}




     
    

    
