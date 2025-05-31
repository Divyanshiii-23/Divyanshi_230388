#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int j=0;j<n;j++){
    for(int k=j+1;k<n;k++){
      if(a[j]>a[k]){
        int temp=a[j];
        a[j]=a[k];
        a[k]=temp;
      }
    }
  }
  int arr[n];
  int sum=1;
  for(int i=0;i<n;i++){
    if(a[i]==a[i+1]){
      sum++;
      arr[i]=1;
      
    }
    if(a[i]!=a[i+1]){
      arr[i]=sum;
      sum=1;

    }
  }
 int ans=0;
for(int i=0;i<n;i++){
  if(arr[i]>ans){
    ans=arr[i];
  }
  
}
cout<<ans;}