// merge_sort : recursively split the array into subarrays that are
// half the size and sort them, once ordered the subarrays are merged
// to get the original ordered array 
// Not optimal ! Expected to be O(nlogn) but this code is O(n^2logn)

#include <bits/stdc++.h>
using namespace std;

int felipe = 0;
void merge_sort(int a, int b, vector<int> &v){
    if(v[a] == v[b])return;
    int k = (a+b)/2;

    merge_sort(a, k, v);
    merge_sort(k+1, b, v);

    vector<int> left_vec;
    vector<int> right_vec;
    vector<int> final_vec;
    int n = b-a+1;

    for(int i=a; i<=k; i++)left_vec.push_back(v[i]);
    for(int i=k+1; i<=b; i++)right_vec.push_back(v[i]);
    
    for(int i=0; i<n; i++){
        if(int(left_vec.size()) > 0 && int(right_vec.size()) > 0){
            if(left_vec[0] > right_vec[0]){
                final_vec.push_back(right_vec[0]);
                right_vec.erase(right_vec.begin());
            }
            else{
                final_vec.push_back(left_vec[0]);
                left_vec.erase(left_vec.begin());
            }
        }else{
            if(left_vec.size() == 0){
                for(int j=0; j<int(right_vec.size()); j++){
                    final_vec.push_back(right_vec[0]);
                    right_vec.erase(right_vec.begin());
                }
            }else{
                for(int j=0; j<int(left_vec.size()); j++){
                    final_vec.push_back(left_vec[0]);
                    left_vec.erase(left_vec.begin());
                }
            }
        }
    }
    for(int i=a; i<=b; i++){
        v[i] = final_vec[i-a];
    }
}

int main(){

    vector<int> v = {1, 2, -1, 0, 2, -5, 10, 11, 9, -2, 500};
    merge_sort(0, 10, v);

    for(int i=0; i<11;i++){
        cout << v[i] << " ";
    }
    cout << endl;

}
