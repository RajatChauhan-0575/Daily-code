class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     int n= nums.size();
     int i =0, flag=0;
     int j=0, last=n-1, k=0;
     for (i=n-2; i>=0; i--)
     { for(j=n-1; j>i; j--)
       {  
           if(nums[j]>nums[i])
           {    swap(nums[i], nums[j]);
                flag=1; break;}
       }
       if(flag == 1)
           break;
     }
        
     if(flag==1)
       sort(nums.begin() + i + 1 , nums.end());
     else
       sort(nums.begin(), nums.end());
    }
};