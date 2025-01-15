class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>m;
        for(auto i:s){
            m[i]++;
        }

        for(auto j:m){
            pq.push({j.second,j.first});
        }

        string res;

        while(pq.size()>=2){
            auto [occ1,val1]=pq.top();pq.pop();
            auto [occ2,val2]=pq.top();pq.pop();
            res+=val1;
            res+=val2;

            if(--occ1 >0) pq.push({occ1,val1});
            if(--occ2>0) pq.push({occ2,val2});
        
        }

        
            if(!pq.empty()){
                auto [occ,val]=pq.top();
                if(occ>1) return "";
                res+=val;
            }

            return res;

    }
};