class Solution {
public:
    void rotate(vector<vector<int>>& x) {
        //solving it in-place 
        int n=x.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(x[i][j],x[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(x[i].begin(),x[i].end());
        }
    }
};