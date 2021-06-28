#include<iostream>
#include<math.h>
using namespace std;

int finalInstances(int instances, int arr[], int n)
{
    int takeAction = 0;
    
    for(int i=0; i<n; )
    {
        if(arr[i] < 25 && instances > 1)
        {
            instances = ceil((float)instances/2);
            takeAction = 1;
        }
        
        if(arr[i] >60 && (instances*2 < 2*pow(10,8)))
        {
            instances *= instances*2;
            takeAction = 1;
        }
        
        if(takeAction == 1)
        {
            i = i + 10;
            takeAction = 0;
        }
        
        i++;
    }
    
    return instances;
}

int main()
{
    int arr[1000], n, instances;
    
    cin>>instances;
    cin>>n;
    for(int i=0; i<n; i++)
       cin>>arr[i];
    
    int res = finalInstances(instances, arr, n);
    cout<<res;
}