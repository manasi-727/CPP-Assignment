#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        char C = 'A';
        for (j = 5; j >= i; j--)
        {
            cout << C << " ";
            C++;
        }
        cout << "\n";
    }
    return 0;
}