#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    string result;
    for (int i = s1.size(); i >= 0; i--)
    {
        result.push_back(s1[i]);
    }
    cout << result << endl;
}