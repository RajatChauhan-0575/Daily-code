// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    // arr[] : The input Array
    // N : Size of the Array
    // X : Sum which you need to search for 
    //Function to find if there exists a triplet in the 
    //array arr[] which sums up to X.
    bool find3Numbers(int arr[], int N, int X)
    {
        int i=0, l=0, r=0, flag=0;
        sort(arr, arr+N);
        
        for(i=0; i<N; i++)
        {
            l=i+1;
            r=N-1;
            while(l<N && l<r)
            {
                if((arr[l]+arr[r]) == (X-arr[i]))
                   return flag=1;
                else if ((arr[l]+arr[r]) > (X-arr[i]))
                        r--;
                     else
                        l++;
            }
        }
        
        if(flag==0)
          return false;
        else
          return true;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, N, sum) << endl;
    }
}
  // } Driver Code Ends