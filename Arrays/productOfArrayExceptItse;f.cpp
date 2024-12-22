class Solution {
public:
//leftProduct*rightProduct i.e.,prefix & suffix products
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;
        int suffix=1;
        vector<int> v(n,1);
        for(int i=0;i<n;i++){
            v[i]=v[i]*prefix;
            prefix*=nums[i];
            v[n-i-1]*=suffix;
            suffix*=nums[n-i-1];
        }
        return v;
    }
};