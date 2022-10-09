#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int temp = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[temp])
            {
                swap(arr[j], arr[temp]);
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
    selectionSort(v, n);
}