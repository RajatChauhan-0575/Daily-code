// { Driver Code Starts
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
    int i=0, l_min=0, r_min=0, area = 0, largest_area=INT_MIN;
    
    for( i=0; i<n; i++)
    {
        for(l_min=i-1; l_min>=0; l_min--)
           if(arr[l_min] < arr[i])
               break;
        l_min++;
        
        for(r_min=i+1; r_min<n; r_min++)
           if(arr[r_min] < arr[i])
               break;
        
        r_min--;
        
        if(l_min == r_min)
           area = arr[i];
        else
           area = (r_min-l_min+1)*arr[i];
           
        if(area > largest_area)
           largest_area = area;
    }
    
    return largest_area;
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