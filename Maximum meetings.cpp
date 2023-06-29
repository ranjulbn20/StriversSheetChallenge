// Day 11

#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    vector<pair<int, pair<int,int>>> ans;

    for(int i=0; i < start.size(); i++) {
        ans.push_back({end[i], {i+1, start[i]}});
    }
    sort(ans.begin(), ans.end());
    int last = -1;
    vector<int> result;
    for(auto j : ans) {
        if(j.second.second > last) {
            result.push_back(j.second.first);
            last = j.first;
        }
    }

    return result;
}