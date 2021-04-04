// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B);

// User code will be pasted here

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        cout<<wordBreak(line, dict)<<"\n";
    }
}
// } Driver Code Ends


//User function template for C++

// A : given string to search
// B : vector of available strings

int wordBreak(string A, vector<string> &B) {
    int i=0;
    int s=A.length();
    string prefix = "";
    for(i=0; i<s; i++)
    {
        prefix = prefix + A[i];
        
        if(find(B.begin(), B.end(), prefix) != B.end())
            prefix = "";
    }
    
    if(prefix == "")
      return 1;
    else
      return 0;
}