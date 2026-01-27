#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size()+1;
        long long sum = (n *1LL* (n + 1)) / 2;
        //for larger size input
        int s2=0;
        for(int i=0; i<n-1; i++){
            s2 += arr[i];
        }
        return (sum-s2);
    }
};