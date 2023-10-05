#include<bits/stdc++.h>
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

            


    
}