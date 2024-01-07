#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int mn1 = x, mx1 = y;
    int mn2 = y, mx2 = x;
    for (int i = 1;; i++)
    {
        cin >> x;
        if (x == -998 || x == -999)
            break;
        else
            cin >> y;

        if (i % 2 == 1)
        {
            mx1 = max(mx1, x);
            mn1 = min(mn1, y);
            mn2 = min(mn2, x);
            mx2 = max(mx2, y);
        }
        else
        {
            mx1 = max(mx1, y);
            mn1 = min(mn1, x);
            mx2 = max(mx2, x);
            mn2 = min(mn2, y);
        }
    }
    if (x == -998)
    {
        cout << mn1 << " " << mx1 << endl;
    }
    else
    {
        cout << mn2 << " " << mx2 << endl;
    }
}
