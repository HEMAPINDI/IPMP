class Solution {
public:
//O(N) O(N)
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>v;

        while(ss>>word){
            v.push_back(word);
        }
        string res;
        for(int i=v.size()-1;i>=0;i--){
            res+=v[i];
            if(i!=0) res+=" ";
        }
        return res;
    }
};