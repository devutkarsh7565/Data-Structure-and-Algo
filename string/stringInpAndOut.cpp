#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string result = s1 + " " + s2;
    cout << result << endl;
    if (s1 == s2)
    {
        cout << "equal" << endl;
    }
    else
        cout << "not equal" << endl;
}