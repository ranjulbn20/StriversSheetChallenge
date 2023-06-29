//Day 11

#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    map<int, pair<int,int>> mp;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int sum = arr[i] + arr[j];
            int temp = target-sum;
            if(mp.find(temp) != mp.end()) {
                if(mp[temp].first != i && mp[temp].second != j)
                    return "Yes";
            }
            else {
                mp[sum] = {i,j};
            }
        }
    }

    return "No";
}
