#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  char arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  } 
  int count=0;
  int a,b,c,d,e,f;
  a=b=c=d=e=f=0;
  for(int i=0;i<n;i++){
    if(arr[i]=='(')
    a++;
    if(arr[i]==')')
    b++;
    if(arr[i]=='[')
    c++;
    if(arr[i]==']')
    d++;
    if(arr[i]=='{')
    e++;
    if(arr[i]=='}')
        f++;
  }
  if(a!=b || c!=d || e!=f)
    {cout<<"NO";
     count++;
    }
  else      
  for(int i=0;i<n;i++){
    if(arr[i]=='(' && arr[i+1]==']')
    {cout<<"NO";
    count++;
    break;}
    if(arr[i]=='(' && arr[i+1]=='}')
    {cout<<"NO";
     count++;
     break;
    
    }
    if(arr[i]=='[' && arr[i+1]=='}')
    {cout<<"NO";
     count++;
     break;
    
    }
    if(arr[i]=='[' && arr[i+1]==')')
    {cout<<"NO";
     count++;
     break;
    
    }
    if(arr[i]=='{' && arr[i+1]==']')
    {cout<<"NO";
     count++;
     break;
    
    }
    if(arr[i]=='{' && arr[i+1]==')')
    {cout<<"NO";
     count++;
     break;
    
    }

  







}

if(count<1){
  cout<<"YES";}
}