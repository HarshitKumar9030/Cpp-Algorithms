#include <iostream>
#include <cmath>
using namespace std;
int rootsofquadratic(int a, int b, int c)
{
    float root = (b * b) - (4 * a * c);
    int squareroot = sqrt(root);
    if (root >= 0)
    {
        int firstroot = ((-b) + squareroot) / (2 * a);
        int secondroot = ((-b) - squareroot) / (2 * a);
        if (root == 0)
        {
            cout << "Real and Equal" << endl;
            cout << firstroot << " " << secondroot;
        }
        else
        {
            cout << "Real and Distinct" << endl;
            if (firstroot > secondroot)
            {
                cout << secondroot << " " << firstroot << endl;
            }
            else
            {
                cout << firstroot << " " << secondroot << endl;
            }
        }
    }
    else
    {
        cout << "Imaginary" << endl;
    }

    return 0;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    rootsofquadratic(a, b, c);
    return 0;
}