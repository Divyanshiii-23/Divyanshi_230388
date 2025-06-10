#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int longestSubstring(string s) {
    int n = s.length();
    if (n == 0) return 0;
    
    vector<int> lastIndex(128, -1); // ASCII characters
    int maxLength = 0;
    int start = 0;
    
    for (int end = 0; end < n; end++) {
        if (lastIndex[s[end]] >= start) {
            start = lastIndex[s[end]] + 1;
        }
        lastIndex[s[end]] = end;
        maxLength = max(maxLength, end - start + 1);
    }
    
    return maxLength;
}
int main(){
string s;
    getline(cin,s);
    cout<<longestSubstring(s);
}