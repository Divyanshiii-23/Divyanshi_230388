#include <iostream>
using namespace std;

bool compare_it(vector<long long int>a,vector<long long int>b)
{
    if(a[0]*b[1]>a[1]*b[0])
    return true;
    else
    return false;
}


int main() {
	
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    vector<vector<long long int>> arr(n,vector<long long int>(2));
	    for(long long int i=0;i<n;i++)
	    cin>>arr[i][0];
	    for(long long int i=0;i<n;i++)
	    cin>>arr[i][1];
	    sort(arr.begin(),arr.end(),compare_it);
	    long long int l=0,s=0;
	    for(int i=0;i<n;i++)
	    {
	        s = s + arr[i][1]*l;
	        l+=arr[i][0];
	    }
	    cout<<s<<endl;
	    t--;
	}
}