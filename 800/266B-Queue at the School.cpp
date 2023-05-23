//266B-Queue at the School
//题意：每次交换一个‘B’和'G'位置，求交换t次的结果
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t--)
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                s[i] = 'B';
                s[i - 1] = 'G';
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
