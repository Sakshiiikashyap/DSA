#include <bits/stdc++.h>
using namespace std;
void sLargest(vector<int>&arr, int n){
    int largest=arr[0];
    int sLargest=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            sLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest){
            sLargest=arr[i];
        }
    }
    cout<<sLargest;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sLargest(arr, n);
}