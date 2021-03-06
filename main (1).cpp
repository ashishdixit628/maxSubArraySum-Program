#include<bits/stdc++.h>
using namespace std;

void maxSubArraySum(int arr[], int size)
{
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    
    for(int i=0; i<size;i++)
    {
        max_ending_here+=arr[i]
        
        if(max_so_far < max_ending_here)
        max_so_far=max_ending_here;
        
        if(max_ending_here<0)
        max_ending_here=0;
    }
    return max_so_far
}

int main()
{
    int arr[] = {-4,-3,1,2,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = maxSubArraySum(arr,n);
    cout<<result;
    return 0;
}
