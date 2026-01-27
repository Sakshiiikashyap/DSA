#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int i=0;
        int j=0;
        vector<int> ans;
        while(i<arr1.size() && j<arr2.size()) {
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr2[j]<arr1[i]){
                j++;
            }
            else {
                //to avoid duplicate elements
                if (ans.empty() || ans.back() != arr1[i]) {
                    ans.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};