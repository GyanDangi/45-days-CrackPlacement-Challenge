#include <bits/stdc++.h>
using namespace std;


vector<int> TwoSum(vector<int>&v, int target){

		for(int i=0; i<v.size(); i++){

			for(int j=i+1; j<v.size(); j++){

				if(v[i]+v[j]==target){
					return {i,j};
				}
			}
		}
}


int main(){
		vector<int>v={3,2,7,4};
		int target=9;
		vector<int>ans;
		ans=TwoSum(v,target);
		for(auto i:ans){
			cout<<i<<" ";
		}
	return 0;
}