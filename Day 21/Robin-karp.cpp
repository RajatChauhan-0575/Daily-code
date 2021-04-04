// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            int M = pat.length(); 
            int N = txt.length(); 
            int i, j; 
            int p = 0; // hash value for pattern 
            int t = 0; // hash value for txt 
            int h = 1;
            int q=101;
            int d=256;
            vector<int> result;
            // The value of h would be "pow(d, M-1)%q" 
            for (i = 0; i < M - 1; i++) 
                h = (h * d) % q; 
          
            // Calculate the hash value of pattern and first 
            // window of text 
            for (i = 0; i < M; i++) 
            { 
                p = (d * p + pat[i]) % q; 
                t = (d * t + txt[i]) % q; 
            } 
      
            // Slide the pattern over text one by one 
            for (i = 0; i <= N - M; i++) 
            { 
          
                // Check the hash values of current window of text 
                // and pattern. If the hash values match then only 
                // check for characters on by one 
                if ( p == t ) 
                { 
                    /* Check for characters one by one */
                    for (j = 0; j < M; j++) 
                    { 
                        if (txt[i+j] != pat[j]) 
                            break; 
                    } 
          
                    // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1] 
                    if (j == M) 
                        result.push_back(i+1); 
                } 
          
                // Calculate hash value for next window of text: Remove 
                // leading digit, add trailing digit 
                if ( i < N-M ) 
                { 
                    t = (d*(t - txt[i]*h) + txt[i+M])%q; 
          
                    // We might get negative value of t, converting it 
                    // to positive 
                    if (t < 0) 
                    t = (t + q); 
                } 
            } 
            
            if(result.empty())
               result.push_back(-1);
               
            return result;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends