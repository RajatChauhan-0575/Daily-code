// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:     
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        int i=0, j=0, k=0, l=0;
        
        for(i=0; i<n; i++)
           for(j=i+1; j<n; j++)
             swap(matrix[i][j], matrix[j][i]);
            
        for(i=0; i<n/2; i++)
           for(j=0; j<n; j++)
              swap(matrix[i][j], matrix[n-i-1][j]);
    } 
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends