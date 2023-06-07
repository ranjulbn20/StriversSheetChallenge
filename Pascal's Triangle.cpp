//Day 1

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> result;

    for(int i = 0; i < n; i++) {
      vector<long long int> temp;
      
      for(int j = 0; j <= i; j++) {
        if(j == 0)
          temp.push_back(1);
        else if(j > 0 && j < i)
          temp.push_back(result[i-1][j-1]+result[i-1][j]);
        else
          temp.push_back(1);
      }

      result.push_back(temp);
    }

    return result;
}
