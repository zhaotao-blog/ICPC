//不同的字母
//法一
#include <bits/stdc++.h>

using namespace std;
  int b[26];
int main() {
  string a;
  getline(cin, a);
  int n = 0;
  for (int i = 1, len = a.length() - 1; i < len; i++) {
    if (a[i] >= 'a' && a[i] <= 'z')
        b[a[i] - 'a']++;
  }
  int count = 0;
  for (int i = 0; i < 26; i++) {
    if (b[i] >= 1)
      count++;
  }
  cout << count << endl;
  return 0;
}
法二
#include<iostream>
#include<cctype>
#include<set>

using namespace std;

int main()
{
    string s;
    set<char> l;
    getline(cin, s);
    for (int i = 0; s[i]; i++)
    {
        if (isalpha(s[i]))
            l.insert(s[i]);
    }
    cout << l.size() << endl;
    return 0;
}
