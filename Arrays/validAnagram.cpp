class Solution {
public:
    //sol using single map
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;//m[str[i]]=count
        if(s.length()!=t.length())return false;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
            m[t[i]]--;
        }
        for(int i=0;i<s.length();i++){
            if(m[s[i]]!=0) return false;
        }
        return true;

    }
};