/*
       ／＞  フ
      |  _  _|
     ／`ミ _x 彡      * MEOW *
    /      |
   /   ヽ   ﾉ
／￣|   | | |
| (￣ヽ＿_ヽ_)_)
＼二つ
*/
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define ll                  long long
#define llu                 long long unsigned int
#define endl                '\n'
#define repi(i,n)           for (int i = 0; i <n; i++)
#define repia(i,a,n)        for (int i = a; i <=n; i++)
#define repj(j,n)           for (int j = 0; j < n; j++)
#define repja(j,a,n)        for (int j = a; j <=n; j++)
#define vi                  vector<int>
#define pi                  pair<int, int>
#define pb(a)               push_back(a)
#define INT_MAX             2147483647
#define mem1(a)             memset(a,-1,sizeof(a))
#define mem0(a)             memset(a,0,sizeof(a))
#define joshi               main
#define toint(x)            stoi(x)
const int                    maxi = 1e5;
const int                   maxn = 3e3 + 10;
const ll                    mod = 1e9 + 7;

using namespace std;



// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;
//     if (n % 2 == 0 || n % 3 == 0)
//         return false;
//     for (int i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     return true;
// }


// long long lcm(int a, int b)
// {
//     return (a / __gcd(a, b)) * b;
// }







// int solve()
// {
//      ll n , x;
//     cin>>n;
//     vi v(n);
//     repi(i,n)
//     {
//         cin>>v[i];
//     }
// }



// void  solve(int n)
// {


// }



int joshi(void)
{

	ios::sync_with_stdio(0);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);//for input from input.txt
	freopen("output.txt", "w", stdout); //for Output.txt
#endif

	ll test_case = 1;


	while (test_case--)
	{

		//solve();


		ll n, k;
		cin >> n >> k;
		ll out = 0;
		vector<ll> v;
		while (k--)
		{
			string s1 , s2 , s3;
			s1 = to_string(n);
			s2 = to_string(n);
			sort(s1.begin() , s1.end());
			sort(s2.begin() , s2.end(), greater<char>());
			ll num1 = 0 , num2 = 0 ;
			string ss = "";

			// cout << s1 << " " << ss << " " << s2 << endl;
			for (ll i = 0; i < s1.size(); i++)
			{
				num1 = num1 * 10 + s1[i] - '0';
				num2 = num2 * 10 + s2[i] - '0';
			}

			out = num2 - num1;

			n = out;
			
		}


		cout << n << endl;


	}





// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	return 0;

}

