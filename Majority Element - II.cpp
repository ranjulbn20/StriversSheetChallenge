// Day 11

#include <bits/stdc++.h>
#include <math.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> result;
    map<int, int> mp;

    int limit = floor(arr.size()/3);

    for(int i=0; i < arr.size(); i++) {
        if(mp.find(arr[i]) == mp.end()) {
            mp[arr[i]] = 1;
        }
        else {
            mp[arr[i]]++;
        }
    }

    for(auto x : mp) {
        if(x.second > limit) {
            result.push_back(x.first);
        }
    }

    return result;
}