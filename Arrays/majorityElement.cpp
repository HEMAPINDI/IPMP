class Solution {
public:
    //MOORES VOTING ALGO o(n) o(1)
    //using map O(n) o(n)
    int majorityElement(vector<int>& nums) {
        int x,count;
        count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                x=nums[i];
                count=1;
            }
            else if(x==nums[i]) count++;
            else count--;
        }
        return x;
    }
};