#include <iostream>
using namespace std;

int expand(string s, int i, int j, int n)
{
    int l=i, r=j;
    while(l>=0 && r<n && s[l] == s[r])
    {
        l--; r++;
    }
        
    return r-l-1;
}

void longest_palindrome(string input)
{
   
    int i=0, len1=0, len2=0, len=0;
    int n = input.length();
    int c_g=1, l_f=0;
    for(i=0 ; i<n; i++)
    {
        len1 = expand(input, i, i, n);
        len2 = expand(input, i, i+1, n);
        
        len = max(len1, len2);
        
        if(len > c_g)
        {
            c_g = len;
            l_f = i - (len - 1)/2;
        }
    }

    string final = input.substr(l_f, c_g);
    final.push_back(0);
    cout<<final<<endl;
}
int main() {
	int T=0;
	string input; 
	cin>>T;
	
	while(T>0)
	{
	    T--;
	    cin>>input;
	    longest_palindrome(input);
	}
	return 0;
}