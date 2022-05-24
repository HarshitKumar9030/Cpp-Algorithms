#include <bits/stdc++.h>
using namespace std;
void Spiral_Print(int arr[][100], int m, int n)
{
    int Sr = 0, Er = m - 1, Sc = 0, Ec = n - 1;
    while (Sr <= Er && Sc <= Ec)
    {
        //start row
        for (int i = Sr; i <= Ec; i++)
            cout << arr[Sr][i] << " ";
        Sr++;

        //end col
        for (int i = Sr; i <= Er; i++)
            cout << arr[i][Ec] << " ";
        Ec--;
        //end-bottom row
        if (Er > Sr)
        {
            for (int i = Ec; i >= Sc; i--)
                cout << arr[Er][i] << " ";
            Er--;
        }

        //start col
        if (Ec > Sc)
        {
            for (int i = Er; i >= Sr; i--)
                cout << arr[i][Sc] << " ";
            Sc++;
        }
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[100][100], x = 1;
    //GENERATING MATRIX
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = x;
            x++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    Spiral_Print(arr, m, n);

    return 0;
}
