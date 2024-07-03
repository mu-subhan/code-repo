class Solution {
public:
    int countGoodSubstrings(string s) {
      unordered_map<int,int>mp;
      int i=0,j=0, count=0;

      while(j<s.size()){
        mp[s[j]]++;

        if(j-i+1==3){
            if(mp.size()==3) count++;
            mp[s[i]]--;
            if(mp[s[i]]==0) mp.erase(s[i]);
            i++;
        }
        j++;
      }  
      return count;
    }
};