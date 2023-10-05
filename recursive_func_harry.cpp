#include <iostream>
using namespace std;

// int fact(int x);  // Function Prototype

// int main(){
//     int a;
//     cin >> a;
//     int ans = fact(a);
//     cout << ans<<endl;

//     return 0;
// }

// int fact(int x){
//     if(x==1 || x==0 ){
//         return 1;
//     }
//     else{
//         return x * fact(x-1); 
//     }
// } 

// Sum of first n natural numbers  using recursion..
// int sum(int n);

// int main(){
//     int n;
//     cin >> n;
//     int ans = sum(n);
//     cout << ans;
// }

// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     else{
//         return n + sum(n-1);
//     }
// }

// Fibonacci Series Using Recursion..
int fibonacci(int n);

int main(){
    int n;
    cin >> n;  // No. of terms..
    int term = fibonacci(n);
    cout << term <<" ";
}

int fibonacci(int n){
    if(n == 1){
        return 0;
    }
    else if (n == 2){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
