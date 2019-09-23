// kkkk_sort: performs a sorting restricted to natural numbers !=0
// with no repetition

#include <bits/stdc++.h>
using namespace std;

void kkkk_sort(int n, int b, vector<int> &v){
    vector<int> v_bound(b+1, 0);

    for(int i=0; i<n; i++){
        v_bound[v[i]] = v[i];
    }
    int k = 0;
    for(int i=0; i<=b; i++){
        if(v_bound[i] != 0){
            v[k] = v_bound[i];
            k++;
        }
    }
}

int main(){

    //example
    int n = 5;
    int b = 10;
    vector<int> v = {1, 10, 5, 2, 3};
    kkkk_sort(n, b, v);
    
    for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter){
        cout << *iter << " ";
    }
    cout << endl;
}