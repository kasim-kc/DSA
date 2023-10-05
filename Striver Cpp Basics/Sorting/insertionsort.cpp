#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[]){
    int n=6;
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
        }
    }

    cout<<"Array after sorting is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {13,46,24,52,20,9};
    
    insertionSort(arr);

}