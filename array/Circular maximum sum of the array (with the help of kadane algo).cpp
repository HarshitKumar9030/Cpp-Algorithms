#include <bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n)
{

    int maxSum = 0;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
            currSum = 0;
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int CircularMaxSum(int arr[], int n)
{
    //for Circular max sum we must do 3 steps
    //1) first negate the elements of the array and do it's kadanes
    //2) do normal kadane with the Normal array.
    //3) add the all elements of the array

    //Step -1.
    for (int i = 0; i < n; i++)
        arr[i] = -arr[i];
    //kadane of modified array
    int sum1 = kadane(arr, n);

    for (int i = 0; i < n; i++)
        arr[i] = -arr[i];
    //Step-2.
    int sum2 = kadane(arr, n);

    //Step-3.
    int sum3 = accumulate(arr, arr + n, 0);

    return max(sum2, sum1 + sum3);
    /*
    For Circular Sum weneed to do return max of normal kadane , sum of modified array
    and sum of the array elements
    */
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[10000];
        for (int i = 0; i < n; i++) //will take input of the array
            cin >> arr[i];
        cout << CircularMaxSum(arr, n) << endl;
    }
    return 0;
}
