// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int i=0, j=0, l_max=0, r_max=0, min_h=0, total=0;
        
        r_max = *max_element(arr, arr+n);
        l_max = arr[0];
        
        for(i=0; i<n; i++)
        {
            min_h = min(l_max, r_max);
            
            if(arr[i] < min_h )
            {
                total = total + (min_h - arr[i]);
            }
            else if( arr[i] == r_max )
                 {
                    l_max = r_max; r_max = arr[n-1];
                    break;
                 }
            
            if( arr[i] > l_max)
                l_max = arr[i];
        }
        
        for(j=n-1; j>i; j--)
        {
            min_h = min(l_max, r_max);
        
            if(arr[j] < min_h)
            {
                total = total + (min_h - arr[j]);
            }
            else if( arr[j] == l_max )
                 {
                    r_max = l_max;
                    break;
                 }
            
            if( arr[j] > r_max)
                r_max = arr[j];
        }
        
        if(j>i)
        {
            for( ; j>i; j--)
            {
                total = total + (r_max - arr[j]);
            }
        }
        
        return total;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends