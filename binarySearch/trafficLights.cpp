#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, n;
    cin >> x >> n;
    
    set<long long> positions;
    multiset<long long> lengths;

    positions.insert(0);
    positions.insert(x);

    lengths.insert(x);

    for (int i = 0; i < n; i++) {
        long long pos;
        cin >> pos;

        auto iter = positions.insert(pos).first;
        long long previous = *prev(iter);
        long long nxt = *next(iter);

        lengths.erase(lengths.find(nxt - previous));

        lengths.insert(pos - previous);
        lengths.insert(nxt - pos);
   
        cout << *lengths.rbegin() << " ";
    }

    return 0;
}
