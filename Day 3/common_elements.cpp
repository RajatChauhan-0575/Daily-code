class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_map<int, int> m1, m2, m3;
            int i;
            vector<int> final;
            
            for(i=0;i<n1;i++)
               m1[A[i]]=1;
            
            for(i=0;i<n2;i++)
               m2[B[i]]=1;
               
            for(i=0;i<n3;i++)
               m3[C[i]]=1;
               
            for (i=0; i<n1;i++)
            {
                if((m1[A[i]] == m2[A[i]])&&(m1[A[i]] == m3[A[i]]))
                   if(!binary_search(final.begin(), final.end(), A[i]))
                      final.push_back(A[i]);    
            }
            
            return final;
        }

};