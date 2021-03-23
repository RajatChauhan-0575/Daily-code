#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Maximum Rectangular area in a histogram
// arr[]: input array
// n: size of array

class Solution
{
    public:
    long long getMaxArea(long long arr[], int n){
    int i=0, tp=0;
    long long area=0, res = INT_MIN;
    stack <int> s;
    for(i=0; i<n;i++)
    {
        while(!s.empty() && arr[i] <= arr[s.top()])
        {
            tp = s.top(); s.pop();
            area = arr[tp]*(s.empty()?i:(i-1-s.top()));
            res = max(res,area);
           
        }
        
        s.push(i);
    }
    
    while(!s.empty())
    {
        tp = s.top(); s.pop();
        area = arr[tp]*(s.empty()?n:n-1-s.top());
        res = max(area, res);
      
    }
    
    return res;
}
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends