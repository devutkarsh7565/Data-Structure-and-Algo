// Binary Search in C++

#include <iostream>
#include <vector>
using namespace std;

// 1 2 3 3 5

int binarySearch(vector<int> array, int high)
{
    int low = 0;
    int mid = low + (high - low) / 2;
    while (low < high)
    {

        if (array[mid] >= array[0])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
        mid = low + (high - low) / 2;
    }

    return low;
}

int main(void)
{
    int n;
    cin >> n;

    vector<int> v;
    int y;

    for (int i = 0; i < n; i++)
    {
        cin >> y;
        v.push_back(y);
    }

    int result = binarySearch(v, n - 1);

    cout << v[result] << endl;
}