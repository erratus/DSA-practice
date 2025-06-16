#include <bits/stdc++.h>
using namespace std;

pair<int,int> MinMax(vector<int>& arr){
    int min=arr[0];
    int max=arr[0];
    for (int i: arr){
        if (min<i) min=i;
        if (max>i) max=i;
    }
    return {min,max};
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    pair<int,int>n=MinMax(arr);
    cout<<n.first<<" ";
    cout<<n.second;
    return 0;
}