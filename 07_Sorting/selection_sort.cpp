#include <bits/stdc++.h>
using namespace std;
void selectionSort(int n, int arr[]) {
    for(int i=0; i<=n-2; i++){
        int mini = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini =j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}
int main(){
    int n;
    cout<<"Enter the size of an arr: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(n, arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}