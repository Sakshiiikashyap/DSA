#include <bits/stdc++.h>
using namespace std;
void explainVector() {
    //define vector
    vector<int>v;       //creates empty container
    v.push_back(1);     //{1}
    v.emplace_back(2);  // {1, 2} dynamically increases the size
}
int main() {
    explainVector();
    return 0;
}