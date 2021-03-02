#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    int max_so_far = 0, max_ending_here = 0, i; 
    for(i=0 ; i<n ;i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if(max_ending_here < 0)
           max_ending_here = 0;
        else
           if(max_ending_here > max_so_far)
              max_so_far = max_ending_here;
    }   
    
     return max_so_far;
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends