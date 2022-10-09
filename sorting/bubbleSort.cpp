#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> arr, int size)
{
    for (int i = 1; i < size; i++)
    // (n-1) round
    {

        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    bubbleSort(v, n);
}