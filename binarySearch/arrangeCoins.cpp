class Solution {
public:
    int arrangeCoins(int n) {
        int low=0,high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long val=(long long)mid*(mid+1)/2;
            if(val<=n) { low=mid+1;}
            else if(val>n) {high=mid-1;}
        }
        return high;
    }
};