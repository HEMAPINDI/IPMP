class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_set<int>set;
        int left=0,maxlength=0;
        for(int right=0;right<n;right++){
            if(set.count(s[right])==0){
                set.insert(s[right]);
                maxlength=max(maxlength ,right-left+1);
            }
            else{
                while(set.count(s[right])){
                    set.erase(s[left]);
                    left++;
                }
                set.insert(s[right]);
            }
        }
        return maxlength;
    }
};