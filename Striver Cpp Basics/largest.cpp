#include<bits/stdc++.h>
using namespace std;

int main(){
    int largest,newnum,temp=0;      // Largest for given 5 values
    largest=temp;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter a number: ";
        cin>>newnum;
        if(largest<newnum){
            largest=newnum;
        }

    }
    cout<<"The largest number is: "<<largest;
}