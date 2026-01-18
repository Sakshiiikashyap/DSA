#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr, int f, int e){
    while(f<=e){
        int temp = arr[f];
        arr[f] = arr[e];
        arr[e] = temp;
        f++;
        e--;
    }
}
void rightRotation(vector<int>&arr, int n, int d){
    reverse(arr, 0, d);
    reverse(arr, d+1, n-1);
    reverse(arr, 0, n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    rightRotation(arr, n, d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}