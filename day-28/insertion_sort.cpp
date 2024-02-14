// #include <iostream>
// using namespace std;

// int main()
// {
//   int a[] = {4, 3, 1, 0, 78, 90};
//   int n = sizeof(a) / sizeof(int);
//   for (int i = 1; i < n; i++)
//   {
//     int j = i - 1;
//     while (j >= 0 && a[j] > a[i])
//     {
//     }
//   }
//   for (int i = 0; i < n; i++)

//   {
//     cout << a[i] << " "; /* code */
//   }

//   return 0;
// } // C++ program for insertion sort

#include <bits/stdc++.h>
using namespace std;

// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
  int i, key, j;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}
void printArray(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver code
int main()
{
  int arr[] = {12, 11, 13, 5, 6};
  int N = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, N);
  printArray(arr, N);

  return 0;
}
// This is code is contributed by rathbhupendra
// #include <bits/stdc++.h>
// using namespace std;

// // Function to sort an array using
// // insertion sort
// void insertionSort(int arr[], int n)
// {
//     int i, key, j;
//     for (i = 1; i < n; i++) {
//         key = arr[i];
//         j = i - 1;

//         // Move elements of arr[0..i-1],
//         // that are greater than key,
//         // to one position ahead of their
//         // current position
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// // A utility function to print an array
// // of size n
// void printArray(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// // Driver code
// int main()
// {
//     int arr[] = { 12, 11, 13, 5, 6 };
//     int N = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, N);
//     printArray(arr, N);

//     return 0;
// }