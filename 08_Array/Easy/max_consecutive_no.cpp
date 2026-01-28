#include <bits/stdc++.h>
using namespace std;
//find max consu=ecutive ones ir zero's
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int cnt1=0;
        int cnt0=0;
        int maxi=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==1){
                cnt1++;
                cnt0=0;
            }
            else{
                cnt0++;
                cnt1=0;
            }
            maxi=max(maxi, max(cnt1, cnt0));
        }
        return maxi;
    }
};