#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            
            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                
                left++;
                right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    
    return result;
}

void printTriplets(const vector<vector<int>>& triplets) {
    cout << "Found triplets that sum to 0:" << endl;
    for (const auto& triplet : triplets) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }
    if (triplets.empty()) {
        cout << "No triplets found." << endl;
    }
}

int main(){
  string line;
  cout << "Enter numbers separated by spaces: ";
  getline(cin, line); 

  stringstream ss(line);
  vector<int> nums;
  int x;

  while (ss >> x) {
      nums.push_back(x);
  }
  
  cout << "Input array: [";
  for (int i = 0; i < nums.size(); i++) {
      cout << nums[i];
      if (i < nums.size() - 1) cout << ", ";
  }
  cout << "]" << endl;
  
  vector<vector<int>> result = threeSum(nums);
  printTriplets(result);
  
  return 0;
}