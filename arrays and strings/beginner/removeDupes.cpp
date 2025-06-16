#include <bits/stdc++.h>
using namespace std;

int removeDupes(vector<int>& arr){
    int n=arr.size();
    int i=0,j=1;
    for (j;j<n;j++){
        if (arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main(){
    vector<int> arr={1,1,1,1,1,2,2,2,2,2,3,3,3,3,0,4,4,4,4,4,5};
    int newlen=removeDupes(arr);
    for(int i=0;i<newlen;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}