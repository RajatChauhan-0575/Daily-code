#include <iostream>
#include <vector>
using namespace std;

string countAndSay(int n)
	{
	    int i=0, j=0, c=1;
	    string s1, s2;
	    s1.push_back('1');
	    if(n==1)
	       return s1;
	    s1.push_back('1');
	    if(n==2)
	       return s1;
	    
	    for(i=3; i<=n; i++)
	    {
	        c=1;
	        s1.push_back('*');
	        s2.erase();
	        for(j=1; j<s1.length(); j++)
	        {
	          
	           if(s1[j-1] == s1[j])
	              c++;
	           else
	           {
			     	s2.push_back(c+'0');
			     	s2.push_back(s1[j-1]);
	                c=1;
	           }
	        }
	         s1 = s2;
	         //s1.push_back('*');
	    }

	    return s1;
	}
	
int main() {
	
	int t, n ,i=0;
	
	vector<int> arr;
	
	cin>>t;
	while(t>0)
	{
	    cin>>n;
	    arr.push_back(n);
	    t--;
	}
	t= arr.size();
	while(i<t)
	{
	    string s1 = countAndSay(arr[i]);
	    cout<<s1<<endl;
	    i++;
	}
	return 0;
}