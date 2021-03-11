// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <iostream>
using namespace std;


int minSwap(int *arr, int n, int k);

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
    }
	return 0;
}
// } Driver Code Ends


int minSwap(int *arr, int n, int k) {
    int i=0, j=0, l=0, c1 =0, c2=0;
    int c2_min=0;
    
    for(i=0; i<n; i++)
    {
        if(arr[i] <= k)
           c1++;
    }
    
    if(c1==1 || c1==0)
      return 0;
    i=1;
    j=c1-1;
    
    for(l=0; l<=j; l++)
    {
        if(arr[l] > k)
          c2++;
    }
    
    j++;
    //cout<<" i: "<<i<<"j: "<<j<<endl;
    c2_min = c2;
    
    for(;j<n ; j++, i++ )
    {
        //cout<<" i: "<<i<<"j: "<<j<<endl;
        
        if(arr[i-1] > k)
          c2--;
        
        if(arr[j] > k)
          c2++;
        
        if(c2_min > c2)
          c2_min = c2;
        
        //cout<<"j:"<<j<<"-"<<c2<<endl;
    }    
    
    return c2_min;
    
}
