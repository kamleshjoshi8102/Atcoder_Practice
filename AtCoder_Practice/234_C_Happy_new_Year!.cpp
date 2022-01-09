/* 🐱‍👤
        The Finest Steel has to go through hottest fire 🔥
   🐱‍👤
*/

#include <bits/stdc++.h>
#define ll                  long long
#define en                  '\n'
#define rep(a,b)            for(ll i=a;i<b;i++)
#define pb                  push_back
#define fr                  first
#define se                  second
#define all(v)              v.begin(),v.end()
#define JOSHI               ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
const ll                    mod = 1e9 + 7;
const int                   MAX_SIZE=2000001;

using namespace std;




//              ********************** Functions Start **********************          //


ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

bool isprime(ll n){ if (n <= 1) return true;if (n <= 3) return true;if (n % 2 == 0 || n % 3 == 0) return false;for (ll i = 5; i * i <= n; i = i + 6){ if (n % i == 0 || n % (i + 2) == 0){ return false;}}return true;}

void swap(int &x, int &y) {int temp = x; x = y; y = temp;}

bool ispalin(string s){   for(ll i=0;i<s.size()/2;i++){if(s[i]!=s[s.size()-i-1]){return false;}}return true;}
vector<int>is_prime(MAX_SIZE,true);vector<int>idx(MAX_SIZE);vector<int>prime;vector<int>SPF(MAX_SIZE);
// probably linear time complexity
// SPF=smallest prime factor

void manipulated_seive(int N) {
    is_prime[0] = is_prime[1] = false ;
    for (int i = 2; i < N ; i++) {
        if (is_prime[i]) {
            prime.push_back(i);
            SPF[i] = i;
        }
        for (int j = 0; j < (int)prime.size() && i * prime[j] < N && prime[j] <= SPF[i]; j++) {
            is_prime[i * prime[j]] = false;
            SPF[i * prime[j]] = prime[j] ;
        }
    }
    for (int i = 0; i < (int)prime.size(); i++) {
        idx[prime[i]] = i + 1;
    }
}


//O(log(n))<-- worst case
vector<int>primeFactors(int n){vector<int>factors; while(n>1){factors.push_back(SPF[n]); n/=SPF[n];}return factors;}

// binary exponentiation 
// TC: O(log(b))
// a^b = (a^2)^(b/2)=a^(b)

long long binpow(ll a,ll b){ll res=1;while(b>0){if(b&1){res=res*a;}a=a*a;b>>=1;}return res;}



//              ********************** Functions End **********************          //



/*
2
20
22
200
202
220
222
2000
2002
2020
2022
2200
2202
2220
2222
20000
20002
20020
20022
20200

2020
20200
22220
202000
220020
222200
2000220
2020000
2022020
2200200

*/


void solve()
{
        ll n;
        cin>>n;
        string s="";

        while(n>1)
        {
            if(n%2==0)
            {
                s='0'+s;
                n=n/2;
            }
            else
            {
                s='2'+s;
                n=n/2;
            }
        }
        s='2'+s;
        cout<<s<<en;

}

/*   
     => int overflow
     => array bounds 
     => special cases (n=1?)
     => do smth instead of nothing 
     => stay organized 
     => WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH
     =>Read Stuff At Bottom !


     * +-------+-----------------+
     * |  n    | Worst Algorithm |
     * +-------+-----------------+
     * | 11    | O(n!), O(n^6)   |
     * | 18    | O(2^n * n^2)    |
     * | 22    | O(2^n * n)      |
     * | 100   | O(n^4)          |
     * | 10^2  | O(n^3)          |
     * | 10^3  | O(n^2 log n)    |
     * | 10^4  | O(n^2)          |
     * | 10^6  | O(n log n)      |
     * | 10^7  | O(n)            |
     * +-------+-----------------+
     
*/

int main(void)
{

        JOSHI

      // #ifndef ONLINE_JUDGE
      //  freopen("input.txt", "r", stdin);//for input from input.txt
      //  freopen("output.txt", "w", stdout); //for Output.txt
      // #endif
       


      ll test_case=1;
      
     
      while(test_case--)
      {

        solve();
       
      }
      


  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}
