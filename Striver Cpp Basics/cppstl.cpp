#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    // CPP STL is divided into four : Algorithms, Containers, Functions, Iterators..
    
    // Pairs
    pair<int, int> p ={1,4};
    //cout<< p.first<<" ";

    pair<int,pair<int,int>> three = {1,{4,3}};   // Nested Property of A Pair
    // cout << three.first <<" " << three.second.first << " " << three.second.second; 

    pair<int,int> arr[] = {{1,2}, {3,4}, {5,6}};
    //cout << arr[2].second;
     
    
    // Containers :-> Vectors
    // vector<int> v;
    // v.push_back(2);
    // v.emplace_back(5);   // Both Used to Insert in Vector...

    // vector<pair<int,int>> vec;
    // vec.push_back({1,2});
    // vec.emplace_back(3,4);
    
    vector<int> init(5,100);
    vector<int> ini(5);         // Here the initialisation Of Values in Compiler-Dependent i.e, either Zero Or Some Gar. Val

    // Copying One vector into another..
    vector<int> newOne(ini);

    
    // Accessing a vector traditional method
    // cout << ini[0] << " " << ini.at(0);

    
    // ++++++ ITERATORS FOR VECTORS +++++++++
    vector<int> v = {20,10,15,6,7};
    vector<int>::iterator it = v.begin();    // points to the memory address of first element of vector
    it++;                                    // printing 'it' will give a memory address
    // cout << *(it) << " ";                    // * is used to access element at the memory address 
    
    it = it + 2;
    // cout << *(it) << " "; 

    //vector<int>::iterator it = v.end();      // end iterator will point to memory address just after last element

   // vector<int>::iterator vit = v.rend();    // it is the iterator that points just before first element

   // vector<int>::iterator mit = v.rbegin();   // it is iterator that point the ending element of vector..

    // cout << v.back()<<endl;      // prints the last element of vector..



    
    // +++++++++++ PRINTING THE VECTOR ++++++++++++
    // ITERATOR WAY

    // for(vector<int>:: iterator traverse = v.begin(); traverse != v.end(); traverse++ ){
    //     cout << *(traverse) << " "; 
    // }
    // cout << endl;

    // shorter syntax :-> use auto -> auto automatically represents or replaces vector<int>::iterator
    // It basically assigns datatype according to the datatype..

    // for(auto incre = v.begin();incre != v.end(); incre++){
    //     cout << *(incre) << " ";
    // }

    
    // ++++++++++++++++ FOR - EACH LOOOOOOOP..++++++++++++++++++++
    
    for(auto it : v){
        cout << it <<" ";         // Here its not about iterator, its about variable..
    }

    
    // +++++++++++++++ DELETION IN VECTORS +++++++++++++++++++++

    // {10, 20, 12, 23}
    v.erase(v.begin() + 1); 


    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4);    // {10, 20, 35}  [start, end)  -> end is the address of the guy which is after deletion.. 
}



    // ++++++ INSERT FUNCTION +++++++
 
// vector<int>naya(2,100);
// naya.insert(naya.begin(), 300);        // {300, 100, 100};
// naya.insert(naya.begin() + 1, 2, 50);  // {300, 50, 50, 100, 100};     // 2 is the number of times you want to insert..

vector<int> copy(2, 50);
// v.insert(v.begin(), copy.begin(), copy.end());   // {50,50,300,10,10,100,100}    // copying one vector to another, adds copy to v at start

// {10, 20}
// cout << v.size();  // prints the number of elements that vector contains..

// {10, 20}
// v.pop_back();      // deletes the last element of the vector

/*  // v1 -> {10, 20}
    // v2 -> {30, 40} */ 
 // v1.swap(v2);   v1 --> {30, 40}, v2 --> {10, 20}

// v.clear();      // it erases the entire vector


// cout << v.empty();    Returns a boolean value based on is vector empty or not..


// +++++++++++++++++++++ LISTS +++++++++++++++
// Declaration : list<int> ls;

// ls.push_back(2);
// ls.push_front(3);

// it provides front opertions as well rest all in same as vector
// insert function in vector is costlier so a list can be used..


// list is internally implemented as a doubly-linked list whereas a vector is a singly linked list..


// rest all functions are same as vector
// begin, end , rbegin, rend, swap, clear, insert, size



// A demo line to check success
