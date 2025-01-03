class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int n=v.size();
        int cnt1=0,cnt2=0;
        int ele1,ele2;
        ele1=ele2=INT_MIN;
        for(int i=0;i<n;i++){
            if(cnt1==0&&v[i]!=ele2) {
                cnt1=1;
                ele1=v[i];
            }
            else if(cnt2==0&&v[i]!=ele1){
                cnt2=1;
                ele2=v[i];
            }
            else if(ele1==v[i]) cnt1++;
            else if(v[i]==ele2) cnt2++;
            else {cnt1--;cnt2--;}
        }
        vector<int>ans;
        cnt1=cnt2=0;
        int mini=n/3+1;
        for(int i=0;i<n;i++){
            if(ele1==v[i])cnt1++;
            else if(ele2==v[i]) cnt2++;
        }
        if(cnt1>=mini) ans.push_back(ele1);
        if(cnt2>=mini) ans.push_back(ele2);
        return ans;
    }
};