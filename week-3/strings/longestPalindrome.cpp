
class Solution {
public:
//expanding around center using 2 pointer logic
//handling both odd and even length strings 
//using seperate util func
    string longestPalindrome(string s) {
        if (s.length() <= 1) {
            return s;
        }

        string max_str = s.substr(0, 1);

        for (int i = 0; i < s.length() - 1; i++) {
            string odd = util(s, i, i);
            string even = util(s, i, i + 1);

            if (odd.length() > max_str.length()) {
                max_str = odd;
            }
            if (even.length() > max_str.length()) {
                max_str = even;
            }
        }

        return max_str;
    }

    string util(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }
};




class Solution {
public:
//BRUTE FORCE...
bool util(string str) {
        int left = 0;
        int right = str.length() - 1;
        
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            ++left;
            --right;
        }
        
        return true;
    }
    string longestPalindrome(string s) {
        if(s.length()<=1) return s;

        int n=s.length();
        int max_len=1;
        string str;
        for(int i=0;i<n;i++){
            for(int j=i+max_len;j<=n;j++){
                if(j-i>max_len&&util(s.substr(i,j-i))){
                    max_len=j-i;
                    str=s.substr(i,j-i);
                }
            }
        }
        return str;
    }
};