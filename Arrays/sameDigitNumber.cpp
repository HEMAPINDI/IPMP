class Solution {
public:
    string largestGoodInteger(string arr) {
         string str,ans;
         str=ans="";
         int j,k;
         for(int i=0;i<arr.size();i++){
               j=i+1;
               k=i+2;
               if(k<arr.size()&&arr[i]==arr[j]&&arr[i]==arr[k]){
                str+=arr[i];
                str+=arr[j];
                str+=arr[k];
                ans=max(ans,str);
                str="";
               }
         }
         return ans;
    }
};