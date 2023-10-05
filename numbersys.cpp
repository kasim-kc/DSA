#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // Write a program to check number of '1' bits of an unsigned int..

    // int n;
    // cin>>n;

    // int count=0;
    // while(n!=0){
    //     if(n&1){
    //         count++;
    //     }
    //     n = n >> 1;
    // }
    // cout<<count;


    // BINARY TO DECIMAL CONVERTER..
    // int n;
    // cout<<"Enter A Binary Number: ";
    // cin>>n;

    // int ans=0;
    // int power=1;
    // while(n>0){
    //     int lastdigit=n%10;
    //     ans=ans+(lastdigit*power);
    //     power*=2;
    //     n/=10;
    // }

    // cout<<"Decimal Form of the Number: "<<ans<<endl;

   
   
    // DECIMAL TO BINARY CONVERTER...
    // int n;
    // cout<<"Enter A Decimal Number: ";
    // cin>>n;

    // int ans=0;
    // int power=1;
    // while(n>0){
    //     int parity=n%2;
    //     ans += parity*power;
    //     power *= 10;
    //     n/=2;
    // }

    // cout<<"Binary Form of Number is: "<<ans<<endl;


   // DECIMAL TO BINARY (BABBAR BHAIYYA METHOD)
//    int n;
//    cin>>n;

//    int ans=0;
//    int power=1;
//    while(n!=0){
//         int bit=n&1;
//         ans=(bit*power)+ans;
//         power *=10;
//         n= n>>1;
//    }

//    cout<<ans<<endl;


// DECIMAL TO BINARY FOR A NEGATIVE NUMBER..
// long long int n;
//     cin>>n;
//     unsigned long long int i=0,ans=0;
//     if(n<0){
//         n=pow(2,16)+n;
//     }
//     cout<< n <<endl;
//     while(n){
//         int lastBit=n&1;
//         ans=(pow(10,i))*lastBit+ans;
//         n=n>>1;
//         i++;
        
//     }
//     cout<<ans<<endl;


// COMPLEMENT OF A BASE 10 INTEGER..
int n;
cin>>n;

int m = n;
int mask = 0;

while(m != 0){
    mask = (mask << 1) | 1;
    m = m >> 1;
}
int ans=(~n) & mask;
cout<<ans<<endl;
    

}
