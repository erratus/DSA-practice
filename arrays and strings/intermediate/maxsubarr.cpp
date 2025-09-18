#include <bits/stdc++.h>
using namespace std;

int maxsubarray(vector <int>& arr){
    int maxnum=arr[0];
    int curr=arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        curr=max(arr[i],curr+arr[i]);
        mmaxnum=max(maxnum,curr);
    }
    return maxnum;
}

int main(){

    return 0;
}