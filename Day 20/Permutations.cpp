// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    private: vector<string> final;
	public:
	
	    void perm(string S, int l, int r)
	    {
	        if(l==r)
	           final.push_back(S);
	           
	        for(int i=l; i<r; i++)
	        {
	            swap(S[l], S[i]);
	            perm(S, l+1, r);
	            swap(S[l], S[i]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    perm(S, 0, S.length());
		    sort(final.begin(), final.end());
		    return final;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends