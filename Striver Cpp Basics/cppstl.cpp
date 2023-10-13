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

// +++++++++++++ DEQUE CONTAINER ++++++++++++

/* Declaration :*/ deque<int> dq;

// It works similar to list
/*
    dq.push_back(1); 
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    // dq.pop_back();   // Removes the end element 
    // dq.pop_front();  // Removes the element at the starting of deque..

    // rest functions are same as of vector
    // begin, end, rbegin, rend, clear, insert, size, swap..    
*/


// ++++++++++ STACK ++++++++++

/* Declaration: */  stack<int> st;    // stack follows LIFO Principle
/*
    st.push(1);
    st.push(2);      // The elements automatically get pushed at the front
    st.push(3);      // There is no indexing in stack. has only three operations: push, pop, top take O[1]..
    st.push(3);
    st.emplace(5);     // {5,3,3,2,1}  how a stack could look if it was an array

    cout << st.top();     // returns the last element that was pushed or say the element at first position]

    st.pop();   // It will remove the last element that was pushed

    cout << st.size()   // It  will return the number of elements pushed/present in stack

    cout << st.empty()  // a boolean function that checks if a stack is empty..

    stack<int> st1, st2;
    st1.swap(st2);         // Replaces the contents of s1 with s2 and s2 with s1.. can say same elements under diff. name    
*/


// ++++++++++ QUEUES  ++++++++
/*Declaration :*/  queue<int> q;
// It follows FIFO principle which is First In First Out

/*
    q.push(1);  
    q.push(2);  
    q.emplace(4);  {1,2,4}     // pushes element at the back which means the element which was pushed first will remain at first position

    q.back() += 5;   // Adds 5 to the element that was last added to the queue

    cout << q.back() ; // prints the value of the last element..

    cout << q.front();  // prints the first element to be pushed or say the element currently at the first position

    q.pop(); // it will remove the first element of the queue

    // size swap empty same as stack

    // all the operations in queue take constant time..
*/

// ++++++ Priority QUEUE ++++++++
/* Declaration :*/ priority_queue<int> pq;    // MAXXXXXXXXX HEAP

// The difference comes in placing 0f the elements where the elements with higher value are given high priority and are at the front().\
// When imagined as an array or list, the elements are to be sorted in a descending order
// lexicographically largest string.. -> dictionary type se arranged
/*
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(3);    // {8,5,3,2}

    cout << pq.top();   // prints the front/ top i.e, 8

    pq.pop();          // removes the top element
    
    // The data is not maintained in a linear structure.. A tree data structure is maintained behind it

    // size swap empty same as others

    

    // To store elements in a priority queue in a Ascending order i.e, smallest element at top --->> MINIMUM HEAP

    // ++++++++ priority_queue<int, vector<int>, greater<int>> pq;   // Declaration of MINIMUM HEAP Priority Queue  ++++++++

    // push, pop --> log n
    // top --> O(1) time

*/