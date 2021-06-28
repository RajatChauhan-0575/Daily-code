// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int check(string s, vector<vector<char>>grid, int i, int j, int n, int m)
    {
        int x[]={-1, -1, -1, 0 , 0 , 1, 1, 1};
	    int y[]={-1, 0, 1, -1, 1, -1, 0, 1};
	    int len = s.length();
	    int dir = 8, k, l, f=0;
	    int c=0, r=0;
	    
	    for(k=0; k<dir; k++)
	    {   
	        c = j + y[k];
	        r = i + x[k];
	        f=0;
	        
	        for(l=1; l<len; l++)
	        {
	            if(c>=0 && c<m && r>=0 && r<n && s[l] == grid[r][c])
	                f=1;
	            else
	                break;
	            
	            c = c + y[k];
	            r = r + x[k];
	        }
	        
	        if(len == l)
	            return 1;
	    }
	    
	    return 0;
    }
    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    int n = grid.size(), m=grid[0].size();
	    int i,j;
	    vector<vector<int>> result;
	    
	    for(i=0; i<n; i++)
	      for(j=0; j<m; j++)
	        {
	           if(word[0] == grid[i][j])
	             {
                   int r = check(word, grid, i, j , n, m);
               
	               if(r==1)
	               {
	                 vector<int> v;
    	             v.push_back(i);
    	             v.push_back(j);
    	             result.push_back(v);
    	             v.clear();
	               }
	             }            
	        }
	    return result;
 	  }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
	}
	return 0;
}  // } Driver Code Ends