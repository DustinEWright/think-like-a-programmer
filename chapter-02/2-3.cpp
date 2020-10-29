#include <iostream>
using namespace std;

void pattern(int r, int c)
{
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < c; col++)
        {
            if (((row == 0 || row == r - 1) && (col == 0 || col == c - 1) ||
                 (row == 1 || row == r - 2) && (col > 0 && col < 3 || col > 10 && col < 13) ||
                 (row == 2 || row == r - 3) && (col > 1 && col < 5 || col > 8 && col < 12) ||
                 (row == 3 || row == r - 4) && (col > 2 && col < 11)))
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    // only for readability
    cout << endl;
}

int main()
{
    pattern(8, 14);
    return 0;
}