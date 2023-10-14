#include<bits/stdc++.h>
using namespace std;

void introPointers(){
    int num = 5;      // a memory location gets assigned to 5 in the name of num.. num points to 5.
    cout << &num << endl;      // & (address of) operator is used to find the address of variable
    int *ptr = &num;   // ptr is pointer to an integer data that is stores at &num.. pointer stores address
    cout << *ptr << endl;      // this will consider ptr's stored value to location, and move to that location and cout whats stored..4

    // So basically num and ptr above points to same memory location and make a change in 5 when an operation is performed.

    char ch = 'a';
    char *ch_ptr = &ch;     // pointer to  a character  

    double db = 3.4;
    double *db_ptr = &db;    // pointer to double


    // The sizeof(any pointer) of any datatype will be 8 bytes as it will store address not data for it to differ..
}
void copyingPointer(){
    
    int num = 5;
    int *ptr = &num;

    int *copy = ptr;
    
    cout << ptr << endl;
    cout << copy << endl;
}

void pointerArithmetic(){
    int t  = 5;
    int *rt = &t;
    
    cout << *rt++ <<endl;
}

void pointerArray(){
    int arr[]={2,3,4,5,6,7,8};

    cout << arr <<endl;       // gives the address of arr[0]
    cout << &arr[0] << endl;   // does the similar thing as of above

    // arr[i] = *(arr +  i)      // can be thought as internal implementation of accessing of element
    // same as
    // i[arr] = *(i + arr)

    // content of symbol table can't be changed..
    /*
    As the address assigned on declaration can't be changed, modified or played in symbol table, the use of pointers come
    in picture where any game to be played with address.. That address is stored in a pointer and that pointer can be used
    to performed operations and logic onto..The reason that address can be changed in a pointer is that the pointer is mapped
    to its own location in the symbol table and is independent of the variable.. So any modification done is done to the 
    content and not storage location.. Storage location can't be played with in a symbol table
    */
}

void charArray(){
    // cout function implementation is different  for a character array  and integer array

    char ch[6]="abcde";          // 6 is the maximum length of char..

    cout << ch << endl;          // will not print the address of first index or so, it prints the whole content
    
}
int main(){ 
    
}