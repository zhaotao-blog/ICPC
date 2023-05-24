//在第一种情况下，每条龙都被一个煎锅打了一拳。输出12。
//在第二个案例中，龙1,7,11,13,17,19和23毫发无伤地逃脱。
//In the first case every first dragon got punched with a frying pan. Some of //the dragons suffered from other reasons as well, but the pan alone would be //enough.
//In the second case dragons 1, 7, 11, 13, 17, 19 and 23 escaped unharmed.


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, l, m, n, d, sum = 0;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            sum++;
    }
    cout << sum << endl;
    return 0;
}
