#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.capacity() << endl;
        cout << v.at(i) << endl;
        cout << v.size() << endl;
    }
}