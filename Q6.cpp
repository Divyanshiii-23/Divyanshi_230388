#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>
using namespace std;

int subarraysWithAtMostK(vector<int>& A, int K) {
    if (K == 0) return 0;
    
    unordered_map<int, int> count;
    int left = 0, result = 0;
    
    for (int right = 0; right < A.size(); right++) {
        if (count[A[right]]++ == 0) K--;
        
        while (K < 0) {
            if (--count[A[left]] == 0) K++;
            left++;
        }
        
        result += right - left + 1;
    }
    
    return result;
}

int subarraysWithDistinct(vector<int>& A, int B) {
    return subarraysWithAtMostK(A, B) - subarraysWithAtMostK(A, B - 1);
}

int main(){
    string line;
    cout << "A =";
    getline(cin, line); 

    stringstream ss(line);
    vector<int> A;
    int x;

    while (ss >> x) {
        A.push_back(x);
    }
    
    int B;
    cout << "B = ";
    cin >> B;
    
    cout << "Number of good subarrays: " << subarraysWithDistinct(A, B) << endl;
    
    return 0;
}