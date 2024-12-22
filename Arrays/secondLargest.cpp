
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max1=INT_MIN,max2=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(max1<arr[i]){
                max2=max1;
                max1=arr[i];
            }
           else if(max1>arr[i]&&max2<arr[i]){
               max2=arr[i];
           }
        }
    return max2==INT_MIN?-1:max2;
    }
};
