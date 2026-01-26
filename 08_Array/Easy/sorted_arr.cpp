#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int i = 0, j = 0;
        vector<int> unionArr;

        while (i < a.size() && j < b.size()) {

            if (a[i] < b[j]) {
                if (unionArr.empty() || unionArr.back() != a[i])
                    unionArr.push_back(a[i]);
                i++;
            }
            else if (a[i] > b[j]) {
                if (unionArr.empty() || unionArr.back() != b[j])
                    unionArr.push_back(b[j]);
                j++;
            }
            else { 
                if (unionArr.empty() || unionArr.back() != a[i])
                    unionArr.push_back(a[i]);
                i++;
                j++;  
            }
        }

        while (i < a.size()) {
            if (unionArr.empty() || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        }

        while (j < b.size()) {
            if (unionArr.empty() || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        }

        return unionArr;
    }
};