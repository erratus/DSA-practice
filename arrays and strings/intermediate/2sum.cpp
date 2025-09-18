#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> arr, int target){
    unordered_map<int,int> hashmap;
    for (int i = 0; i < arr.size(); i++)
    {
        int complement=target-arr[i];
        if (hashmap.count(complement))
        {
            return {hashmap[complement],i};
        }
        hashmap[arr[i]]=i;
    }
    return {};
}

int main(){
    vector<int> arr={2,3,4,5,3,1,2,2,7};
    int target=4;
    vector<int> solution=twosum(arr,target);
    cout<<solution[0]<<" "<<solution[1];
    return 0;
}