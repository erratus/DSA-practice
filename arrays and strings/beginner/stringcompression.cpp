#include <iostream>
#include <string>
using namespace std;

string compress(string s){
    string compressed;
    int count=1;
    char prev=s[0];
    for(int i=1;i<s.length();i++){
        if(s[i]==prev){
            count++;
        }
        else{
            compressed+=prev;
            compressed+=to_string(count);
            prev=s[i];
            count=1;
        }
    }
    compressed+=prev;
    compressed+=to_string(count);

    return compressed.length()<s.length() ? compressed : s;
}

int main(){
    string s ="aaaaabbbbbddddddvc";
    cout<<compress(s);
    return 0;
}