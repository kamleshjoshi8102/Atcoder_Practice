#include <bits/stdc++.h>
#define ll                  long long
#define llu                 long long unsigned int
#define endl                '\n'
#define repi(i,n)           for (int i = 0; i <n; i++)
;

using namespace std;

int main(void)
{



  ll test_case = 1;
  cin >> test_case;

  while (test_case--)
  {

 
    ll tt;
    cin >> tt;
    vector<int> v(tt);
    set<int> s;
    int h[101] = {0};
    repi(i, tt)
    {
      cin >> v[i];
      s.insert(v[i]);
      h[v[i]]++;
    }
    for (auto mm : s)
    {
      cout << mm << " ";
    }
    for (int k = 0; k < 101; k++)
    {
      if (h[k] >= 2)
      {
        ll kk = h[k] - 1;
        while (kk--)
        {
          cout << k << " ";
        }
      }
    }
    cout << endl;
  }
return 0;

}
