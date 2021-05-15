/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc201/submissions/22602994
 * Submitted at: 2021-05-15 21:05:09
 * Problem URL: https://atcoder.jp/contests/abc201/tasks/abc201_a
 * Result: WA
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned ll;
#define loop(i,n) for(ull i=0;i<n;i++)
#define all(vec) vec.begin(),vec.end()

int main(){
  ll a,b,c;
  cin >> a >> b >> c;
  bool ret = false;
  if(abs(a-b) == abs(a-c)){ ret=true; }
  else if(abs(b-a) == abs(b-c)){ ret=true; }
  else if(abs(c-a) == abs(c-b)){ ret=true; }
  cout << (ret?"Yes":"No") << endl;
  return 0;
}