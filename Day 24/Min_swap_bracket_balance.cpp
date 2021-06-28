// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
       int i=0, n = S.length(), cnt=0, temp;
       queue<int> r;
       stack<int> l;
       
       while( i<n )
       {
            if(S[i] == '[')
            {  
                if(!r.empty())
                {
                    cnt = cnt + r.size();
                    l.push(i);
                    swap(S[r.front()], S[l.top()]);
                    temp = r.front();
                    r.pop();
                    l.pop();
                    l.push(temp);
                    r.push(i);
                }
                else
                  l.push(i);
            }
            else
              r.push(i);
            
            while(!r.empty() && !l.empty())
            {
                l.pop();
                r.pop();
            }
            
            i++;
       }
       
       if(!r.empty() && !l.empty())
          return -1;
       return cnt;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends