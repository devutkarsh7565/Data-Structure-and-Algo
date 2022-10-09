// Binary Search in C++

#include <iostream>
#include <vector>
using namespace std;

// 1 2 3 3 5

int binarySearch(vector<int> array, int x, int high)
{
    int low = 0;
    int firstIndex = -1;
    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
        {
            firstIndex = mid;
            low = mid + 1;
        }

        else if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return firstIndex;
}

int main(void)
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> v;
    int y;

    for (int i = 0; i < n; i++)
    {
        cin >> y;
        v.push_back(y);
    }

    int result = binarySearch(v, x, n - 1);
    if (result == -1)
        printf("Not found");
    else
        cout << result << endl;
}