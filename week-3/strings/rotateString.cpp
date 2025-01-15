class Solution {
public:
//CONCATENATING STRING WITH ITSELF PRODUCES ALL THE ROTATIONS POSSIBLE...
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        return (s + s).find(goal) != string::npos;
    }
};