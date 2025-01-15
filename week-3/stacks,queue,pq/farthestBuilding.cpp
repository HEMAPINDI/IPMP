class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int,vector<int>,greater<int>>pq;//min heap

        for(int i=0;i<heights.size()-1;i++){
            int d=heights[i+1]-heights[i];
            if(d<=0) continue;
            pq.push(d);//stores the larger distanes -- for which ladders are used ..
            if(pq.size()>ladders){ bricks-=pq.top();pq.pop();}
            if(bricks<0) return i;

        }
        return heights.size()-1;
    }
};