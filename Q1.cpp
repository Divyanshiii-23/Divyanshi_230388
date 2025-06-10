#include <iostream>
using namespace std;

int longestSubarrayWithSumK(int n, int k, int a[]) {
  int length=0;
    int sum=0;
    int start=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
      if(sum>k){
         sum-=a[start];
         start++;
        length=i-start+1;
      }
      else if (sum==k){
            length=i+1;
        }
        
    }
return length;
}
int main(){
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  longestSubarrayWithSumK(n,k,a);
  cout<<longestSubarrayWithSumK(n,k,a);
  return 0;
}