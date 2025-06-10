#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int subarrays(vector<int> A,int n,int B){
    int count=0;
    int sum=0;
    int start=0;
    for(int i=start;i<n;i++){
        sum+=A[i]; 
        if(sum<B){
            count++;
        }
      else {
        sum=0;
        start++;
        i=start-1;
      }
    }
    return count;
}


int main(){
    string line;
    getline(cin, line); 

    stringstream ss(line);
    vector<int> A;
    int x;

    while (ss >> x) {
        A.push_back(x);
    }
    int B;
      cin>>B;
 int n=A.size();
    cout<<subarrays(A,n,B);
    


}