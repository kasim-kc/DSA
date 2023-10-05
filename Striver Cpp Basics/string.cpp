#include<iostream>
using namespace std;

int main (){
    string str="Kasim Chhota";
    cout << str << endl;
    cout << "The sixth letter in the string is: " << str[6] <<"\n";
    int len = str.size();
    cout << "The length of the string is: " << len << endl;   // Its the number of characters in that string.. 
    
    
    cin >> str;
    cout << str << endl;
    cout << "The third letter in the string is: " << str[4] <<"\n";
    len = str.size();
    cout << "The length of the string is: " << len << endl;
    
    /*  The Conclusion is..
    (1)If We initialise the string while creation, it stores the string as whole but when taken as input it
     stores till the first space only..
    (2)String has indexes similar to an array with space in consideration(if it exists in string) and its
    characters can be accessed through its indexes..
    */
}