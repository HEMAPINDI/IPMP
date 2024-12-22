class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        i=j=0;
        int n=nums.size();
        while(j<n){
            while(j<n-1&&nums[i]==nums[j+1]){
                j++;
            }
            if(i<n-1&&j<n-1){nums[i+1]=nums[j+1];}
            i++;
            j++;
        }
        return i;
    }
};