class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') count++;
            if(s[i]==')') count--;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};