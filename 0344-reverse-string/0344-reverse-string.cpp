class Solution {
public:
    void reverseString(vector<char>& s) {
        char c;
        int n = s.size();
        for(int i=0; i<s.size()/2; i++) {
            c = s[n-i-1];
            s[n-i-1] = s[i];
            s[i] = c;
        }
    }
};