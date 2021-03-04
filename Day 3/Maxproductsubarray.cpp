class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    
	   long long int max_ending_here = 1;
 
    // min negative product ending 
    // at the current position
       long long int min_ending_here = 1;
 
    // Initialize overall max product
       long long int max_so_far = 0;
       int flag = 0;
	
	for (long long int i = 0; i < n; i++)
    {

        if (arr[i] > 0) 
        {
            max_ending_here = max_ending_here * arr[i];
            min_ending_here
                = min(min_ending_here * arr[i], 1LL);
            flag = 1;
        }
 
        else if (arr[i] == 0) {
            max_ending_here = 1;
            min_ending_here = 1;
        }
 
        else {
            long long int temp = max_ending_here;
            max_ending_here
                = max(min_ending_here * arr[i], 1LL);
            min_ending_here = temp * arr[i];
        }
 
        // update max_so_far, if needed
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    if (flag == 0 && max_so_far == 0)
        return 0;
    return max_so_far;
	}
};