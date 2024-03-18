// hallow rectangle
#include <iostream>
using namespace std;

int main()
{
    int row, coloumn;
    cin >> row >> coloumn;
    int i;
    for (i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            if (i == 0 || i == row-1)
            {
                cout << "*";
            }
            else if (j == 0 || j == coloumn-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
    }
}