class Solution {
public:
    int candy(vector<int>& arr) {
        int n = arr.size();
        int ans = n;
        int i = 1; // start at index 1

            while (i < n) {
            // const slope
            if (arr[i] == arr[i - 1]) {
                i++;
                continue;
            } 

            // increasing slope..
            int peak = 0;
            while (i < n && arr[i] > arr[i - 1]) {
                peak++;
                ans += peak;
                i++;
            }
            // decreasing slope..
            int valley = 0;
            while (i < n && arr[i] < arr[i - 1]) {
                valley++;
                ans += valley;
                i++;
            }
            ans -= min(peak, valley); //overcounting is eliminated ..
        }
        return ans;
    }
};