class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int x=nums[0]^0;
        int i;
        for( i=1;i<n;i++){
            x=x^i^nums[i];
        }
        return x^i;
    }
};