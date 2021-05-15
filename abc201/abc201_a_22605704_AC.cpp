/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc201/submissions/22605704
 * Submitted at: 2021-05-15 21:07:27
 * Problem URL: https://atcoder.jp/contests/abc201/tasks/abc201_a
 * Result: AC
 * Execution Time: 9 ms
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
  if(a==b&&a==c){ ret=true; }
  else if(a==b||b==c||c==a){ ret=false; }
  else if(abs(a-b) == abs(a-c)){ ret=true; }
  else if(abs(b-a) == abs(b-c)){ ret=true; }
  else if(abs(c-a) == abs(c-b)){ ret=true; }
  cout << (ret?"Yes":"No") << endl;
  return 0;
}