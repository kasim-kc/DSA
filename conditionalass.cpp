/*Write a program to take input from user for cost price and selling price and calculate profit or loss..*/
#include<iostream>
using namespace std;

int main(){
    int costprice,sellprice;
    
    cout<<"Enter Costprice: ";
    cin>>costprice;
    
    cout<<"Enter sellingPrice: ";
    cin>>sellprice;
    
    if(sellprice > costprice){
        int profit=sellprice - costprice;
        cout<<"Profit: "<<profit<<endl;

    }
    else{
        int loss = costprice - sellprice;
        cout<<"Loss: "<<loss<<endl;
    }

/*Write a program to print positive number entered by the user, if negative it is skipped..*/
  
  int num;
  cout<<"Enter a number: ";
  cin>>num;

  if(num>0){
    cout<<num<<endl;
  }
  else if(num<0){
    cout<<"Num is negative and skipped";
    
  }

/*Write a program to calculate marks to grades...*/

  int marks;
  cout<<"Enter your marks: ";
  cin>>marks;

  if(marks >= 90){
    cout<<"Your Grade is A+\n";
  }
  else if(marks >= 80){
    cout<<"Your Grade is A\n";
  }
  else if(marks >= 70){
    cout<<"Your Grade is B+\n";
  }
  else if(marks >= 60){
    cout<<"Your Grade is B\n";
  }
  else if(marks >= 50){
    cout<<"Your Grade is C\n";
  }  
}