#include <iostream>
using namespace std;

int main()
{
    int space, rows ,i ,k ,j, l;

    cout << "Enter number of rows: ";
    cin >> rows;

    while (1) // #1
    {

        
        for (i = rows; i >= 1; --i) // #2
        {
            for (l = 0; l < rows - i; ++l)
                cout << "  ";

            for (j = i; j <= 2 * i - 1; ++j)
                cout << "* ";

            for (k = 0; k < i - 1; ++k)
                cout << "* ";

            cout << endl;
        }

        for (i = 1, k = 0; i <= rows; ++i, k = 0)  // #3
        {
            for (space = 1; space <= rows - i; ++space)
            {
                cout << "  ";
            }

            while (k != 2 * i - 1)
            {
                cout << "* ";
                ++k;
            }
            cout << endl;
        }
    }

    return 0;
}