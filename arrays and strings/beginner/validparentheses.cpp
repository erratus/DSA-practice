    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> mp{{']','['},{'}','{'},{')','('}};
        if(s.size() % 2 != 0) return false;
        for(const char &c:s){
            if(mp.find(c)!=mp.end()){
                if(st.empty()) return false;
                if(st.top()!=mp[c]) return false;
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        return st.empty();
    }