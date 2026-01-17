#include <bits/stdc++.h>
using namespace std;
void sSmallest(vector<int>&arr, int n){
    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<sSmallest){
            sSmallest = arr[i];
        }
    }
    cout<<sSmallest;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sSmallest(arr, n);
}