// Binary Search in C++

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> array, int high)
{
    int low = 0;
    int mid = 0;
    // Repeat until the pointers low and high meet each other
    while (low < high)
    {
        mid = low + (high - low) / 2;

        if (array[mid] < array[mid + 1])
            low = mid + 1;

        else
            high = mid;
    }

    return high;
}

int main()
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

    cout << result << endl;
}