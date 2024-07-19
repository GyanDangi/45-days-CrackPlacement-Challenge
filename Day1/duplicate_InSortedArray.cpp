#include <bits/stdc++.h>
using namespace std;

// Approach:01
// Not inplace
// time complexity: O(n)
// sapce Complexity: O(n)

void duplicateInSortedArr(vector<int>&v){

	set<int>s;
	
	for (auto i:v)
	{
		s.insert(i);
	}

	cout<<s.size();
	
}

// Approach:02
// time complexity:O(n)
// space complexity:O(1)

 int duplicteSortedArray(vector<int>&v){

	int count=0;
	for(int i=0; i<v.size(); i++){
		if((i<v.size()-1) && (v[i]==v[i+1])) 
		{
			continue;
		}
		v[count]= v[i];
		count++;
		
	}
	return count;
 }

int main(){
	vector<int>v={1,1,2};
	duplicateInSortedArr(v);
	cout<<endl;
	cout<<duplicteSortedArray(v);
	return 0;
}