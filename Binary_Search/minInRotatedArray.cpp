// Binary Search in C++

#include <iostream>
#include <vector>
using namespace std;

// 1 2 3 3 5

int binarySearch(vector<int> array, int high)
{
    int low = 0;
    int end = high;
    int e = high;
    int mid = low + (e - low) / 2;
    if (array[low] < array[end])
    {
        return array[low];
    }
    else
    {
        while (low < e)
        {

            if (array[mid] >= array[0])
            {
                low = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = low + (e - low) / 2;
        }
        return array[low];
    }
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

    cout << result << endl;
}