#include <bits/stdc++.h>
using namespace std;

void moveZero(vector<int>&v){

	int nonZeroIndex=0; 
	for(int j=0; j<v.size(); j++){

		if(v[j]!=0){
			swap(v[j],v[nonZeroIndex]);
			nonZeroIndex++;
		}
	}

	for(auto j:v){
		cout<<j<<" ";
	}
}
int main(){
		vector<int>v={1,0,1,0,2,3,0,12};
		moveZero(v);
	return 0;
}