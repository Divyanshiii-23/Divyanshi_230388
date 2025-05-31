#include <iostream>
using namespace std;
int sum(int array[], int k, int start){
  int sum=0;
  for(int i=start; i<start+k; i++){
    sum+=array[i];
  }
  return sum;
}
int main() {
  int n, x;
  cin>>n;
  cin>>x;
  int arr[n];
  for(int i=0; i<n; i++){
         cin>>arr[i];
    }
    int count=0;
    for(int i=0; i<n; i++){
      for(int j=1; j<n; j++){
      if(sum(arr, j, i)==x){
        count++;
       }
      }
    }
    cout<<count;