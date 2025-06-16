// to check first non repeating character in a string

#include <bits/stdc++.h>
using namespace std;

int checkstr(string s){
    unordered_map<char,int>freq;
    for (char i : s) freq[i]++;

    for(int i=0;i<s.length();i++){
        if(freq[s[i]]==1){
            return i;
        }
    }
    return -1;
}


int main(){
    string s="aaabbbcddd";
    int n=checkstr(s);
    cout<<s[n];
    return 0;
}