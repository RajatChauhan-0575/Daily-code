class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    // return the length of the longest subsequene of consecutive integers
    int findLongestConseqSubseq(int arr[], int N)
    {
        int i=0, count=0, global_count=1;
      
        sort(arr, arr+N);
      
        for(i=1 ; i<N ;i++)
        { 
            if((arr[i]-arr[i-1]) == 1)
            { 
                if(count == 0)
                  count = count + 2;
                else
                  count++;
            }
            else if(arr[i] != arr[i-1])
                    count = 0;
            
            if(count > global_count)
               global_count = count;
        }
        
        return global_count;
    }
};