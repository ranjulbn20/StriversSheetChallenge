// Day 6

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int count[3];
   count[0] = count[1] = count[2] = 0;
   for(int i = 0; i < n; i++) {
      if(arr[i] == 0)
         count[0]++;
      else if(arr[i] == 1)
         count[1]++;
      else
         count[2]++;
   }

   int j = 0, k = 0;
   while(j < 3) {
      while(count[j] > 0) {
         arr[k++] = j;
         count[j]--;
      }
      j++;
   }
}