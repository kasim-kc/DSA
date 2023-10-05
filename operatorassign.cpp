/* There are 45 total pupils in the class,25 of whom are boys. Write a program to find how many girls received
grades "A" if 17 boys made up 80% of the students that received grade "A"..*/
#include<iostream>
using namespace std;

int main(){
    int total,boys,girls;
    boys=17;
    total=(80*45)/100;
    girls=total-boys;
    cout<<girls<<endl;
   

/*Write a program to calculate the sum of first and second last digit of a 5 digit number*/
    int n,first,second,third,fourth,fifth,sum;
    cin>>n;  //n is a five digit number

    first=n/10000;
    n=n%10000;
    second=n/1000;
    n=n%1000;
    third=n/100;
    n=n%100;
    fourth=n/10;
    fifth=n%10;

    sum=first+fourth;
    cout<<"Sum of first and fourth digit is  "<<sum<<endl;

 /*Write a program to calculate the sum of digits of a 3 digit number.. */
   
   int num,first1,second1,third1,sumall;
   cin>>num;

   first1=num/100;
   num=num%100;
   second1=num/10;
   third1=num%10;
   sumall=first1+second1+third1;

   cout<<"The sum all digits is "<<sumall<<endl;


}
