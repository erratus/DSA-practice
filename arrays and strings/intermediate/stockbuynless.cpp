// Best Time to Buy and Sell Stock
#include <bits/stdc++.h>
using namespace std;

int maxprofit(vector<int>& arr){
    int minprice=INT_MAX;
    int maxprofit=0;
    for(i: arr){
        if(i<minprice){
            minprice=i;
        }else if(maxprofit<i-minprice){
            maxprofit=i-minprice;
        }
    }
    return maxprofit;
}

int main(){
    vector<int> arr={2,1,23,2,3,4,2,3,1,2,4};
    cout<<maxprofit(arr); //22
    return 0;
}