class Solution{
    public:
    //Complete this function
    bool subArrayExists(int arr[], int n)
    {
         int count = 0, sum = 0, i=0, k=0;
        unordered_map < int, int > map;
        map[0]++;
        
        bool result=false;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (map[sum - k])
                count += 1;
            map[sum]++;
        }
        
        if(count>0)
           result = true;
           
        return result;
    }
};