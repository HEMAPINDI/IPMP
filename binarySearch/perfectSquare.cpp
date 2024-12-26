class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=0,high=num;
        while(low<=high){
            long long mid=(low+high)/2;
            long long val=mid*mid;
            if(val==num) return true;
            else if(val<num) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};