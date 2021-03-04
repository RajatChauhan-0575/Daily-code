class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        unordered_map<int, int> m;
        int i=0;
        int count = 0;
        
        for (i=0;i<n;i++)
            m[arr[i]]++;
        
        for(i=0; i<n ;i++)
        {
            count = count + m[k-arr[i]];    
            
            if(k-arr[i] == arr[i])
               count --;
        }
        
        return count/2;
    }
};