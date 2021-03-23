// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends


/*You are required to complete this method*/
class Solution{
  public:
  int getMaxArea(int arr[], int n){
    int i=0, tp=0;
    int area=0, res = INT_MIN;
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
    
    int maxArea(int M[MAX][MAX], int n, int m) {
        int res = INT_MIN;
        int i=0, j=0;
        
        res = getMaxArea(M[0], m);
        
        for( i=1; i<n; i++)
        {
            for(j=0 ; j<m; j++)
            {
                if(M[i][j] == 1)
                   M[i][j]+= M[i-1][j];
            }
            
            res = max( res, getMaxArea(M[i], m));
        }
        return res;
    }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends