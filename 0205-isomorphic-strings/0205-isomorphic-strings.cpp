class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        int idx1=0;
        int idx2=0;
        for(int i=0;i<s.size();i++){
            if(mp1.find(s[i]) == mp1.end()){
                mp1[s[i]]=idx1;
                idx1++;
            }
             if(mp2.find(t[i]) == mp2.end()){
                mp2[t[i]]=idx2;
                idx2++;
             }
             if(mp1[s[i]] != mp2[t[i]]){
                return false;
             }

            
        }
        return true;
    }
};