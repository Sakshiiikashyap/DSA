#include <bits/stdc++.h>
using namespace std;
void explainVector() {
    //define vector
    vector<int>v;       //creates empty container
    v.push_back(1);     //{1}
    v.emplace_back(2);  // {1, 2} dynamically increases the size

    //define vector of pair
    vector<pair<int,int>> vec;
    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5, 100);   //{100,100,100,100,100}

    vecotr<int> v(5);        //{0,0,0,0,0}
    //can you increase the size? yes by using push_back

    vector<int> v1(5, 20);

    vector<int> v2(v1)      //another container but copy of v1

    //how to access elements in vector.
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it+2;
    cout << *(it) << " ";
    
    

}
int main() {
    explainVector();
    return 0;
}