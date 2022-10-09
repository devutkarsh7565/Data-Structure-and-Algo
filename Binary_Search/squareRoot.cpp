// Binary Search in C++

#include <iostream>
#include <vector>
using namespace std;

// 1 2 3 3 5

int binarySearch(int n)
{
    int low = 0;
    int high = n;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ((mid * mid) == n)
        {
            return mid;
        }
        else if ((mid * mid) < n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

double morePrecision(int num, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int result = binarySearch(n);
    double sol = morePrecision(n, 3, result);
    cout << sol << endl;
}