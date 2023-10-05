#include<iostream>
using namespace std;

int main(){
    // TRIANGLE PATTERN OF DIFFERENT NUMBERS
    // int n;
    // cin>>n;

    // int num=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
            
    //         cout<<num<<" ";
    //         num+=1;
    //     }
    //     cout<<endl;
    // } 

    //ANOTHER PATTERN
    // int n;
    // cin>>n;
    // int num=1;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=(n-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // FLOY'Ds TRIANGLE
    // int n;
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if((i+j)%2==0){
    //             cout<<"1";

    //         }
    //         else{
    //             cout<<"0";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Write a program to check whether a number is perfect or not..
    // int n;
    // cin>>n;

    // int sum=0;
    // for(int i=1;i<n;i++){
    //     if(n%i==0){
    //         sum+=i;
    //     }
    // }
    // if(sum==n){
    //     cout<<"It's a perfect number\n";

    // }
    // else{
    //     cout<<"The number is not perfect\n";
    // }

    //Give the perfect numbers between 1 to 500..
    
    // for(int i=1;i<=500;i++){
    //     int sum=0;
    //     for(int j=1;j<i;j++){
    //         if(i%j==0){
    //         sum+=j;
    //         }
    //     }
    
    //     if(sum==i){
    //         cout<<i<<endl;

    //     }
    // }

    //Write a Program to check whether a number is prime or not..
    // int n;
    // cin>>n;

    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"Not Prime";
    //         break;
    //     }
    //     else{
    //         cout<<"Prime";
    //         break;
    //     }
    // }
    

    //Write a program to print all prime numbers from 1 to n..

    // int n;
    // cin>>n;
    
    // int i=2;
    // while(i<=n){
    //     int j=2;
    //     while(j<=i){
    //         if(i==2){
    //             cout<<i<<" ";
    //         }
    //         if(i%j==0){
    //             break;
    //         }
            
            
    //         else if(j==(i-1)){
    //             if(i%j==0){
    //                 break;
    //             }
    //             else{
    //                 cout<<i<<" ";
                
    //             }
    //         }
    //         j++;
            
            
    //     }
    //     i++;
        
    // }

    // Find out the common factors of two numbers..
    // int n,m;
    // cin>>n>>m;
    
    // for(int i=1,j=1;i<=n,j<=m;i++,j++){
    //     if(n%i==0 && m%j==0 && i==j){
    //         cout<<i<<endl;
    //     }
    // }

    
    //Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
    // int n;
    // cin>>n;
    
    // int sum=0;
    // int sum1=0;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    //     cout<<sum<<" ";
    //     sum1+=sum;
    // }
    // cout<<"SUM: "<<sum1;

    //Write a program to display sum of n terms of the 1+11+111+1111+1111..
    // int n;
    // cin>>n;
    
    // int sum1=0;
    // int t=0;
    // for(int i=1;i<=n;i++){
        
    //     int sum=t*10+1;
    //     sum1+=sum;
    //     t=sum;
        
    // }
    // cout<<sum1<<endl;

    // Fibonacci Series till n..
    // int n,a,b;
    // cin>>n;
    // a=0;
    // b=1;
    // cout<<a<<" "<<b;
    // for(int i=3;i<=n;i++){
    //     int term;
    //     term=a+b;
    //     cout<<" "<<term;
    //     a=b;
    //     b=term;
        
    // }

   // Write a program in C++ to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
//    int x,n;
//    cin>>x;
//    cin>>n;

//    float sum=0;

//    for(int i=1;i<=n;i++){
//         float sqr=1;
//         for(int j=1;j<=i;j++){
//             sqr*=x;                              // ISME KUCH TO GADBAD HAI DAYA...PATA LAGAO.. 
//         }

//         float fact=1;
//         for(int j=1;j<=i;j++){
//             fact*=j;
//         }

//         float a=sqr/fact;
//         sum+=a;

//    }
//    cout<<sum<<endl;

// Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].
// int x,n;
//     cout<<"Enter x: ";
//     cin>>x;
//     cout<<"No. of terms: ";
//     cin>>n;
    
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         int term=1;
//         for(int j=1;j<=(2*i)-1;j++){
//             term*=x;
//         }
//         if(i%2==0){
//             cout<<"-"<<term<<endl;
//             sum-=term;
//         }
//         else{
//             cout<<term<<endl;
//             sum+=term;
//         }
//     }
//     cout<<"Sum: "<<sum;


// Write A Program To Check Whether a Number is Prime or Not..(LOVE BABBAR && THE RIGHT WAY)..
// int n;
// cin>>n;

// bool isPrime=1;
// for(int i=2;i<n;i++){
//     if(n%i==0){
//         isPrime=0;
//         break;
//     }
// }
// if(isPrime == 0){
//     cout<<" Not a Prime Number"<<endl;
// }
// else{
//     cout<<"It is a Prime Number"<<endl;
// }



}

 