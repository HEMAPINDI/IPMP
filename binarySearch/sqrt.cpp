class Solution {
public:
//BINARY SEARCH ON ANSWER
    int mySqrt(int n) {
        int low=0,high=n;
        while(low<=high){
            long long mid=(low+high)/2;
            long long sqr=mid*mid;
            if(sqr<=n) low=mid+1;
            else high=mid-1;
        }
        return high;
    }
};