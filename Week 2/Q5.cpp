#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
void sortColors(vector<int>& nums){
    int n=nums.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high)
        if(nums[mid]==0)
            swap(nums[low++],nums[mid++]);
        else
            if(nums[mid]==1)
                mid++;
            else
                swap(nums[mid],nums[high--]);

    return;
}


int main(){
    string line;
    getline(cin, line); 

    stringstream ss(line);
    vector<int> nums;
    int x;

    while (ss >> x) {
        nums.push_back(x);
    }
    int n=nums.size();
    sortColors(nums);
    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";
    cout<<endl;
    
    


}