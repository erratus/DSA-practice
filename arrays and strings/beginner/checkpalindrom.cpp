#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string arr){
    int start=0;
    int end=arr.length()-1;
    int n=arr.length();
    while(start<end){
        if(arr[start]!=arr[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    string arr="A man, a plan, a canal: Panama";
    cout<<isPalindrome(arr);

    return 0;
}