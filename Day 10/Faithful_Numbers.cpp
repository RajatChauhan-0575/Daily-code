// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    long long nthFaithfulNum(int N) {
      long long int num =0;
      int p=0;
      
      while(N>0)
      {
         num = num + (N%2)*pow(7,p);
         p++;
         N=N/2;
      }
      
      return num;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.nthFaithfulNum(N) << endl;
    }
    return 0;
}  // } Driver Code Ends