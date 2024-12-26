#include<bits/stdc++.h>
using namespace std;
void subarrayDivisibility(vector<int> &arr){
    int n=arr.size();
    vector<long long> freq(n,0);
    freq[0]=1;
    long long sum=0;
    long long ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        sum%=n;
        sum=(sum+n)%n;
        ans+=freq[sum];
        freq[sum]++;
    }
    cout<<ans<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subarrayDivisibility(arr);
    return 0;
}