// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a,long long n, long long m);

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		cout<<findMinDiff(a,n,m)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long findMinDiff(vector<long long> a, long long n, long long m){
    
    sort(a.begin(), a.end());
    long long int i=0,j=0, min=LONG_MAX;
    
    for(i=0,j=i+m-1; j<n; i++, j++)
    {
        if(min>(a[j]-a[i]))
           min = a[j] - a[i];
    }
    return min;
}