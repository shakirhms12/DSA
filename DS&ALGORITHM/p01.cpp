#include <iostream>
using namespace std;

int fact(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        int fab=1;
        for (int i = 2; i <= number; i++)
        {
            fab = fab * i;
        }
        return fab;
    }
}

int main()
{
    int n,r;
    cin >> n>>r;
    int ans=fact(n)/(fact(n-r)*fact(r));
    cout << ans;
    return 0;
}