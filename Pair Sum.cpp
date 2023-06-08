//Day 2

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> result;
   map<int,int> omap;
   
   for(int i = 0; i < arr.size(); i++) {
      omap[arr[i]]++;
   } 
   
   for(auto itr = omap.begin(); itr != omap.end(); itr++) {
      int key = itr->first, val = itr->second;
      if(omap.find(s-key) != omap.end()) {
         if(key != s-key) {
            auto ptr = omap.find(s-key);
            val *= ptr->second;
         }

         while(val--) {
            vector<int> temp;
            temp.push_back(key);
            temp.push_back(s-key);
            sort(temp.begin(), temp.end());
            result.push_back(temp);
         }

         omap.erase(s-key);
      }
   }

   return result;
}