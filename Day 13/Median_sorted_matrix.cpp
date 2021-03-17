// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        
        int desired = (r*c+1)/2;
        int max=0, min=0, mid=0;
        int i=0, cnt=0;
        
        min = matrix[0][0];
        max = matrix[0][c-1];
        
        for( i=1; i<r; i++)
        { 
            if(min > matrix[i][0])
               min = matrix[i][0];
               
            if(max < matrix[i][c-1])
               max = matrix[i][c-1];
        }
        
        
        while(min < max)
        {
            cnt = 0;
            mid = min+(max-min)/2;
            
            for(i=0; i<r ; i++)
               cnt = cnt + upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            
            if(cnt < desired)
               min = mid+1;
               
            else 
                max = mid;
        } 
        
        return min;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends