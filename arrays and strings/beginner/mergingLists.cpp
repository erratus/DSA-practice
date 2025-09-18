#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr1,vector<int>& arr2){
    int m=arr1.size();
    int n=arr2.size();
    arr1.resize(m+n);
    int i=m-1,j=n-1,k=m+n-1;

    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k--]=arr1[i--];
        }else{
            arr1[k--]=arr2[j--];
        }
        // cout<<"1";
    }
    
    while(j>=0){
        arr1[k--]=arr2[j--];
        // cout<<"2";
    }
}

int main(){
    vector<int> arr1={1,2,4,7,9,10};
    vector<int> arr2={3,5,6,8};
    merge(arr1,arr2);
    for(int i:arr1){
        cout<<i<<" ";
    }
    return 0;
}