class Solution {
public:
//using heap of size k
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m=matrix.size(),n=matrix[0].size();
        int ans;
        priority_queue<int>pq;

        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                pq.push(matrix[r][c]);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top();
    }
};