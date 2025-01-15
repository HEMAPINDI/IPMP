class Solution {
public:
    
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};
        for (char task : tasks) {
            freq[task - 'A']++;
        }
        sort(begin(freq), end(freq));
        int chunk = freq[25] - 1;
        int idel = chunk * n;

        for (int i = 24; i >= 0; i--) {
            idel -= min(chunk, freq[i]);
        }

        return idel < 0 ? tasks.size() : tasks.size() + idel;
    }
};

class Solution {
public:
    //max freq task dictates the process
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> m;
        for (auto task : tasks)
            m[task]++;
            //max heap..
        priority_queue<int> pq;
        for (auto i : m)
            pq.push(i.second);
        int res = 0;
        while (!pq.empty()) {
            int time = 0;
            vector<int> v;
            for (int i = 0; i <= n; i++) {
                if (!pq.empty()) {
                    v.push_back(pq.top() - 1);
                    pq.pop();
                    time++;
                }
            }
            for (int i = 0; i < v.size(); i++) {
                if (v[i])
                    pq.push(v[i]);
            }
            res += pq.empty() ? time : n + 1;
        }
        return res;
    }
};