#include <iostream>

using namespace std;

int main()
{
    int i, j, sp;
    for (i = 1; i < 6; i++)
    {
        int value = 1;
        for (sp = 1; sp <= 5 - i; sp++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << value << " ";
            value = value * (i - j) / j;
        }
        cout << "\n";
    }
    return 0;
}
