class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string prefix=strs[0];
       int prefixLen=prefix.length();
    for(int i=1;i<strs.size();i++){
       
       while(prefixLen>strs[i].size()||strs[i].substr(0,prefixLen)!=prefix.substr(0,prefixLen))
       { prefixLen--;
       if(prefixLen==0)
       return "";
    }
    prefix=prefix.substr(0,prefixLen);
    }
    return prefix;
    }
};