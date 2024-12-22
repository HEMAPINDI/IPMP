class Solution {
public:
//use map for frequencies
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int count=0;
        for(auto x:m){
            int f=x.second;
            if(f==1) return -1;
            count+=f/3;
            if(f%3) count++;
        }
        return count;
    }
};