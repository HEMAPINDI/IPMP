class Solution {
public:
    int util(vector<int> &piles,int rate){
        int total=0;
        for(int i=0;i<piles.size();i++){
            total+=ceil((double)piles[i]/(double)rate);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int maxi=INT_MAX;
       int n=piles.size();
       for(int i=0;i<n;i++){
           if(maxi<piles[i]) maxi=piles[i];
       } 
       //now range of possible values of k -- 1 to maxi
        int low=1,high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            int total=util(piles,mid);
            if(total<=h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};