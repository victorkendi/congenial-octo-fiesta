// kadane's algorithm : returns the maximum sum of a subarray.

#include <bits/stdc++.h>
using namespace std;

int kadane(int n, vector<int> v){
	int p = 0;
	int s = 0;
	for(int a=0; a<n; a++){
		s = max(v[a], s+v[a]);
		p = max(s, p);
	}
	return p;
}

int main(){
	
	// example
	int n = 8;
	vector<int> v = {-1, 2, 4, -3, 5, 2, -5, 2};
	int ans = kadane(n, v);

	cout << ans << endl;
}
