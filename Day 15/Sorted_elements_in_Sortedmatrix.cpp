// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int> array;
        int i=0, j=0, k=0;
        
        for(i=0; i<N; i++)
            for(j=0 ; j<N; j++)
               array.push_back(Mat[i][j]);
            
        
        sort(array.begin(), array.end());
        
        for(i=0; i<N; i++)
            for(j=0; j<N; j++)
            {
                Mat[i][j] = array[k];
                k++;
            }
    
    return Mat;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends