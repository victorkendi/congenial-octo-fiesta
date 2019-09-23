// bubble_sort : consists of n−1 rounds. On each round, the algorithm iterates
// through the elements of the array. Whenever two consecutive
// elements are found that are not in correct order, the algorithm 
// swaps them

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int n, vector<int> &v){
	for(int i=0; i<n-1;i++){
		for(int j=0; j<n-1; j++){
			if(v[j] > v[j+1]) swap(v[j], v[j+1]);
		}
	}
}

int main(){

	// example
	int n = 24;
	vector<int> v = {1,45,7,-6,2,-4,7,98,-23,1,-1,4,5,6,-48,23,1,-4,6,7,6,-1,4,-9};
	bubble_sort(n ,v);
	
	for(int i=0; i<n; i++){
		cout << v[i] << " ";
	}
	cout << endl;	
	
}