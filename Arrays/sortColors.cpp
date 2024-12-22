class Solution {
public: 
//DUTCH NATIONAL FLAG ALGO
    void sortColors(vector<int>& nums) {
        //0 TO LOW-0  LOW TO MID-1  MID TO HIGH-UNSORTED HIGH+1 TO N-2
        int n=nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high){
           if(nums[mid]==0){
               swap(nums[low],nums[mid]);
               low++;
               mid++;
           }
           else if(nums[mid]==1){
                mid++;
           }
           else{
              swap(nums[mid],nums[high]);
              high--;
           }
        }
    }
};