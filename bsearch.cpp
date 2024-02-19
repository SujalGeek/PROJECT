/*#include <iostream>
using namespace std;

int sizearr(int arr[])
{
    int size0 = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        size0++;
    }
    return size0;
}

int bsearch(int arr[], int b, int e, int n)
{
    int index = ((e + b) / 2);
    int mid = arr[index];
    if (mid == n)
    {
        return index;
    }
    if (mid < n)
    {
        bsearch(arr, index, e, n);
    }
    if (mid > n)
    {
        bsearch(arr, b, index, n);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ans = bsearch(arr, 0, sizearr(arr), 4);
    cout << "size: " << sizearr(arr) << endl;
    cout << "Index: " << ans << endl;
}
*/
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 23;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array" << endl
        : cout << "Element is present at index " << result << endl;
    cout << "Name: Sujal Morwani" << endl;
    cout << "Id no:22DCS051" << endl;

    return 0;
}
