// counting_sort: performs a sorting restricted to natural numbers.

#include <bits/stdc++.h>
using namespace std;

void counting_sort(int n, int b, vector<int> &v){
    vector<int> v_count(b+1, 0);

    for(int i=0; i<n; i++){
        v_count[v[i]] += 1;
    }
    int k = 0;
    for(int i=0; i<=b; i++){
        while(v_count[i] != 0){
            v[k] = i;
            v_count[i]--;
            k++;
        }
    }
}

int main(){

    //example
    int n = 18;
    int b = 10;
    vector<int> v = {1, 10, 5, 2, 3, 3, 0, 4, 3, 2, 1, 1, 0, 9, 4, 6, 3, 8};
    counting_sort(n, b, v);
    
    for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter){
        cout << *iter << " ";
    }
    cout << endl;
}