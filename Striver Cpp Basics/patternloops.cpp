#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*n-(2*i+1);k++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout << endl;
    }
}
void pattern2(int n){
    for(int i=1;i<2*n-1;i++){
        int stars = i;
        if(i > n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    int start = 1;
    for(int i =0;i<n;i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j =0;j<=i;j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}
void pattern4(int n){
    int space = 2*(n-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << j+1;
        }
        for(int j =0;j<space;j++){
            cout<<" ";

        }
        for(int j=i+1;j>0;j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void pattern5(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }

        // alphabets
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
             cout << ch;
             if(j<breakpoint) ch++;
             else ch--;
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }

        cout <<endl;
    }
}
void pattern6(int n){
    for(int i=0;i<n;i++){
        char start='A'+n-i-1;
        for(int j=0;j<=i;j++){
            cout << start;
            start ++;
        }
        cout << endl;
        start--;
    }
}
void pattern7(int n){
    int spaces = 2*n - 2;
    for(int i = 1;i<=2*n-1;i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        //stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout << " ";
        }

        //stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
}

int main(){
    int n;
    cin >> n;
    pattern7(n);
}