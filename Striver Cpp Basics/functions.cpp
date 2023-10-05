#include<bits/stdc++.h>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability 
// Functions are used to use same code multiple times

void printName(string name){       // Parameterised Function
    cout << "Hey " << name << endl;
}

int main(){
    string name;
    cin >> name;
    printName(name); 
    return 0;
}s