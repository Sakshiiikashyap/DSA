//Largest element in an array
#include <bits/stdc++.h>
using namespace std;

void isLargest(vector<int>&arr, int n){
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<largest;
}

 void isSlargest(vector<int>&arr, int n){
    int largest = arr[0];
    int sLargest = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest){
            sLargest = arr[i];
        }
    }
    cout<<sLargest;
 }

 void samllest(vector<int>&arr, int n){
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

 void isSorted(vector<int>&arr, int n){
    for(int i=1; i<n; i++){
        if(arr[i]>=arr[i-1]){
        }
        else{
            cout<<"false";
            return;
        }
    }
    cout<<"true";
 }
 void unique(vector<int>&arr, int n){
    int i=0;
    for(int j=0; j<n; j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<<i+1;
 }
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    unique(arr, n);
}