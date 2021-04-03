// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    // Function to return if the paranthesis are balanced or not
    bool ispar(string x)
    {
        stack<int> s;
        
        int i=0, n= x.length(), f=0;
        
        for(i=0; i<n; i++)
        {
            if(x[i] == '{' || x[i] == '[' || x[i] == '(')
               s.push(x[i]);
            else
            {
                if(s.empty())
                 return false;
                switch(s.top())
                {
                    case '{' : if ( x[i] =='}')
                                {f=1; break;}
                    
                    case '[' : if ( x[i] ==']')
                                {f=1; break;}
                    
                    case '(' : if ( x[i] ==')')
                                {f=1; break;}
                }
                
                if(f==1)
                {s.pop(); f=0;}
                else 
                return false;
            }
        }
        
        if(!s.empty())
                 return false;
        return true;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends