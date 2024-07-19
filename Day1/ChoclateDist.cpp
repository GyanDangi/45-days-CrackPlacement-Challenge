#include<bits/stdc++.h>
using namespace std;

int minChoclate(vector<int>&v, int student){

	int ans=INT_MAX;
	int n=v.size();
	sort(v.begin(),v.end());

	for(int i=0; i<n-student+1; i++){


		int minCh=v[i];
		int maxCh=v[i+student-1];
		ans= min(ans,maxCh-minCh);

	}
	return ans;
}


int main(){

		vector<int>v={3, 4, 1, 9, 56, 7, 9, 12};
		int student =5;
		int ans= minChoclate(v,student);
		cout<<ans;
	return 0;
}