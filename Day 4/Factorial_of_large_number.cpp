class Solution {
public:
    vector<int> factorial(int N){
        vector<int>list;
        list.push_back(1);
        
        int prod = 0, carry=0 ;
        long long int i=0, j=0;
        
        for(i=1; i<=N ; i++)
        {
            for(j=0; j<list.size();j++)
            {
                prod = list[j] * i + carry;
                list[j] = prod%10;
                carry = prod/10;
            }
            if(carry>0)
                while(carry)
                {
                    list.push_back(carry%10);
                    carry = carry/10;
                }
                
            carry = 0;
        }
    
        reverse(list.begin(), list.end());
        
        return list;
    }
};
