#include <bits/stdc++.h>
using namespace std;
//arrays are always passes by using pass by refrence.

void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "value of array inside the function: " << arr[0] << endl;

}

int main() {
    int n;
    cout << "Enter size of array";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    doSomething(arr, n);
    cout << "value of array inside the int main: " << arr[0];
    return 0;
}
