class Solution {
public:
    string toLowerCase(string s) {
     vector<char> n(s.size());
     for(int i=0;i<s.size();i++){
        n[i] = std::tolower(s[i]);
     }
     return string(n.begin(), n.end());      
    }
};