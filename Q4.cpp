#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void anagrams(string s, string p){
    vector<int> result;
    if (s.length() < p.length()) {
        return;
    }
    
    vector<int> pFreq(26, 0);
    vector<int> windowFreq(26, 0);
    
    for (char c : p) {
        pFreq[c - 'a']++;
    }
    
    int windowSize = p.length();
    
    for (int i = 0; i < windowSize; i++) {
        windowFreq[s[i] - 'a']++;
    }
    
    if (pFreq == windowFreq) {
        result.push_back(0);
    }
    
    for (int i = windowSize; i < s.length(); i++) {
        windowFreq[s[i] - 'a']++;
        windowFreq[s[i - windowSize] - 'a']--;
        if (pFreq == windowFreq) {
            result.push_back(i - windowSize + 1);
        }
    }
    
    cout << "Anagram indices: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << " ";
    }
    cout << endl;
}

int main(){
string s,p;
    getline(cin,s);
    getline(cin,p);
    anagrams(s,p);

}