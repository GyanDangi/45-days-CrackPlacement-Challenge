
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int solve(vector<int>& nums, int curr, int prev){

    //base case:
    if(curr==nums.size()){
        return 0;
    }
    // include:
    int  pick=0;
    if(prev==-1 || nums[curr]>nums[prev]){
        pick =1+solve(nums, curr+1, curr);
    }
    // exclude:
    int notpick= 0+solve(nums, curr+1, prev);
    return max(pick,notpick);
}

    int solveMem(vector<int>& nums, int curr, int prev,vector<int>&dp){

    //base case:
    if(curr==nums.size()){
        return 0;
    }

    if(dp[curr]!=-1){
        return dp[curr];
    }
    // include:
    int  pick=0;
    if(prev==-1 || nums[curr]>nums[prev]){
        pick =1+solveMem(nums, curr+1, curr,dp);
    }
    // exclude:
    int notpick= 0+solveMem(nums, curr+1, prev,dp);
    dp[curr]= max(pick,notpick);
    return dp[curr];
}
    
    int lengthOfLIS(vector<int>& nums) {
        int curr= 0;
        int prev=-1;
        vector<int>dp(nums.size()+1,-1);
        // int ans = solve(nums, curr, prev);
        // return ans;

       return solveMem(nums, curr, prev,dp);
    }
};