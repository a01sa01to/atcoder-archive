/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc202/submissions/22828710
 * Submitted at: 2021-05-22 22:14:08
 * Problem URL: https://atcoder.jp/contests/abc202/tasks/abc202_c
 * Result: WA
 * Execution Time: 503 ms
 */

#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ull1d = vector<ull>;
using ull2d = vector<ull1d>;
using ull3d = vector<ull2d>;
#define loop(i,n) for(ull i=0;i<n;i++)
#define rloop(i,n) for(ull i=n-1;i>=0;i--)
#define all(vec) vec.begin(),vec.end()

int main(){ cout << fixed << setprecision(15);
  ull n; cin >> n;
  ull count=0;
  ull1d a(n),b(n),c(n);
  loop(i,n){ cin >> a[i]; }
  loop(i,n){ cin >> b[i]; }
  loop(i,n){ cin >> c[i]; }
  sort(all(a)); sort(all(b)); sort(all(c));
  ull last = 0, itr=0, lastxy=0, lastnum=0;
  loop(i,n){
    if(lastnum == a[i] && itr<n && last<n){ count += lastxy; continue; }
    ull x=0,y=0, tmp=last+1;
    for(ull j=last;j<=n;j++){
      if(j==n){ x=n-last; last=n; break; }
      if(a[i] < b[j]){ x=j-last; last=j; break; }
    }
    for(ull k=itr;k<=n;k++){
      if(k==n && tmp<c[n-1]){ y=n-itr; itr=n; break; }
      else if(k==n){ y=0;itr=n;break; }
      if(last < c[k]){ y=k-itr; itr=k; break; }
    }
    // cout << i << " " << last << " " << itr << " | " << a[i] << " | " << x << " " << y << endl;
    count += x*y;
    lastxy = x*y;
    lastnum = a[i];
  }
  cout << count << endl;
  return 0;
}