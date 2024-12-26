#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<long long> x(n);

    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    for(int i=1;i<n;i++){
        x[i]+=x[i-1];
    }

    set<pair<long long,int>> s;
    for(int i=a-1;i<b&&i<n;i++){
        s.insert({x[i],i});
    }

    long long ans=LLONG_MIN;
    for(int i=0;i<=n-a;i++){
       if (i>0)
        ans=max(ans,s.rbegin()->first-x[i-1]); 
        else
         ans=max(ans,s.rbegin()->first);
        s.erase({x[i+a-1],i+a-1});
        if(i+b<n){
            s.insert({x[i+b],i+b});
        }
    }
    std::cout<<ans;

    return 0;
}