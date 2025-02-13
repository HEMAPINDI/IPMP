class Solution {
public:
//hypothetically convert 2d to 1d with n*m ele and apply BS...
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int n=matrix.size(),m=matrix[0].size();
         int low=0,high=n*m-1;
         int mid;
         while(low<=high){
              int mid=(low+high)/2;
              int row=mid/m,col=mid%m;
              if(matrix[row][col]==target) return true;
              else if(matrix[row][col]>target) high=mid-1;
              else low=mid+1;
         }
         return false;
    }
};