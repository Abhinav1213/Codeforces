/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
#define inf 1e18

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<ll , ll>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    string s;

    sf(t);
    while(t--)
    {
        cin >> s;
        sort(s.begin(), s.end());

        k = 1; n = s.length();
        for(i = 1; i < n; i++)
        {
            if(s[i] - s[i - 1] != 1){
                k = 0;
                break;
            }
        }

        if(k)
            pfs("yes\n");
        else
            pfs("no\n");
    }


    return 0;
}
