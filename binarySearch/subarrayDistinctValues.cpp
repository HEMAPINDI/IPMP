#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> m;
    long long count=0;
    int j=0;

    for(int i=0;i<n;i++){
        while(j<n && m.size()<k || m.count(arr[j])){
            m[arr[j]]++;
            j++;
        }
        count+=j-i;
        m[arr[i]]--;
        if(m[arr[i]]==0){
            m.erase(arr[i]);
        }
    }
    cout<<count<<endl;

}