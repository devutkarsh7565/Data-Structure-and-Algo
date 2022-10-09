// Binary Search in C++

#include <iostream>
#include <vector>
using namespace std;

// 1 2 3 3 5
int pivotElement(vector<int> arr, int high)
{
    int low = 0;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= arr[0])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    return low;
}
int binarySearch(vector<int> array, int x, int high, int pivot)
{
    int low = 0;
    int ans = -1;
    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
        {
            ans = mid;
            return ans;
        }

        if (x > array[mid])
            low = mid + 1;

        else
            high = mid - 1;
    }

    return ans;
}

bool searchKeyInRotatedArray(vector<int> v, int high, int key)
{
    int pivot = pivotElement(v, high);
    int low = 0;

    if ((key >= v[pivot]) && (key <= v[high]))
    {
        int result = binarySearch(v, key, high, pivot);
        if (result == -1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        int result = binarySearch(v, key, pivot - 1, low);
        if (result == -1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
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
    // int piv = pivotElement(v, n - 1);
    int result = searchKeyInRotatedArray(v, n - 1, x);
    // cout << piv << endl;
    cout << result << endl;
}