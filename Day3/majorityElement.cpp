#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n= nums.size();
        int majorityCnt =n/2;
        int ans=0;

        unordered_map<int,int>map;

        for(auto i:nums){
            map[i]++;
        }
        for(auto i:map){
            if(i.second>majorityCnt){
               ans= i.first;
            }
        }

        return ans;

    }
};