// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
      int i, k = 0, l = 0;
        vector<int> final;
 
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (k < r  && l < c) {
        /* Print the first row from
               the remaining rows */
        for (i = l; i < c; ++i) {
            final.push_back(matrix[k][i]);
        }
        k++;
 
        /* Print the last column
         from the remaining columns */
        for (i = k; i < r ; ++i) {
            final.push_back(matrix[i][c - 1]);
        }
        c--;
 
        /* Print the last row from
                the remaining rows */
        if (k < r ) {
            for (i = c - 1; i >= l; --i) {
                final.push_back(matrix[r - 1][i]);
            }
            r--;
        }
 
        /* Print the first column from
                   the remaining columns */
        if (l < c) {
            for (i = r - 1; i >= k; --i) {
                final.push_back(matrix[i][l]);
            }
            l++;
        }
    }
    
    return final;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends