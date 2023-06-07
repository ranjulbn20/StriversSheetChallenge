//Day 1
#include <bits/stdc++.h>

long long maxSubarraySum(int arr[], int n)
{
    long long maxSum = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        if(sum + arr[i] > 0)
            sum += arr[i];
        else
            sum = 0;
        
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}