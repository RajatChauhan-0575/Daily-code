// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool isInterleave(string A, string B, string C);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		cout<<isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
bool isInterleave(string A, string B, string C) 
{
   int i=0, j=0, k=0, p=0, q=0;
   int n = A.length();
   int m = B.length();
   int l = C.length();
   
   while(k<l)
   {
        if(C[k] == A[i])
           i++;
        else if(C[k] == B[j])
               j++;
        k++;
   }
   
   k=0;
   
   while(k<l)
   {
        if(C[k] == B[p])
          p++;
        else if(C[k] == A[q])
              q++;
        
        k++;
   }
   
   if((i==n && j==m) || (p==n && q==m))
      return 1;
   return 0;
}   
