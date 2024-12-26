 vector<int> smallestDifferenceTriplet(vector<int>& arr1, vector<int>& arr2,
                                          vector<int>& arr3) {
        vector<int>v(3);
        int n=arr1.size();
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        sort(arr3.begin(),arr3.end());
        
        int ans=INT_MAX,mid;
        
        int i,j,k;
        i=j=k=0;
        
        int maxi,mini,ans_maxi,ans_mini;
        while(i<n&&j<n&&k<n){
             mini=(arr1[i]<arr2[j]&&arr1[i]<arr3[k])?arr1[i]:((arr2[j]<arr3[k])?arr2[j]:arr3[k]);
             maxi=(arr1[i]>arr2[j]&&arr1[i]>arr3[k])?arr1[i]:((arr2[j]>arr3[k])?arr2[j]:arr3[k]);
            int sum=arr1[i]+arr2[j]+arr3[k];
            
            if(mini==arr1[i]) i++;
            else if(mini==arr2[j]) j++;
            else k++;
            
            if(ans>maxi-mini){
                ans=maxi-mini;
                mid=sum-(maxi+mini);
                ans_mini=mini;
                ans_maxi=maxi;
                
            }
            
        }
        v[0]=ans_maxi;
        v[1]=mid;
        v[2]=ans_mini;
        return v;
    }