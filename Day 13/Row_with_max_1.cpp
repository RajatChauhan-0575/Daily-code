// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int i=0, j=0, no=0, max=0, max_i=0, f=0;
	    
	    for(i=0; i<n; i++)
	    {
	        if(arr[i][0] == 1)
	           return i;
	        else
	            for(j=1; j<m; j++)
	            {
	                if(arr[i][j] == 1)
	                   {no = m - j;f=1; break;}
	            }   
	       if(max < no)
	       {  max = no; 
	          max_i = i;}
	        
	    }
	    
	    if( f==0 )
	      return -1;
	    else
	      return max_i;
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends