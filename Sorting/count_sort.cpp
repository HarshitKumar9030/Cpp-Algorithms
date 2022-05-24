#include <bits/stdc++.h>
using namespace std;
void countSort(long int array[], long int size)
{
    long int output[1000004];
    long int count[1000004];
    long int max = array[0];

    // Find the largest element of the array
    for (long int i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }

    // Initialize count array with all zeros.
    for (long int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }

    // Store the count of each element
    for (long int i = 0; i < size; i++)
    {
        count[array[i]]++;
    }

    // Store the cummulative count of each array
    for (long int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    // Find the index of each element of the original array in count array, and
    // place the elements in output array
    for (long int i = size - 1; i >= 0; i--)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    // Copy the sorted elements into original array
    for (long int i = 0; i < size; i++)
    {
        array[i] = output[i];
    }
}

// Function to print int an array
void printArray(long int array[], long int size)
{
    for (long int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
int main()
{
    long int n;
    cin >> n;
    long int arr[1000004];
    for (long int i = 0; i < n; i++)
        cin >> arr[i]; //initializing the original array
    countSort(arr, n);
    printArray(arr, n);

    return 0;
}