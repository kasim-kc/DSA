#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;   // A string is only considered till the space.. If we give input as 'Hey Kasim', it takes only Hey
    cout << s;   // word == string

    getline(cin, s);
    cout << s;


}