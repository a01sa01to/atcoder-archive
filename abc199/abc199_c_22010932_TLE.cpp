/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/22010932
 * Submitted at: 2021-04-24 21:21:34
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)

string t1(string s,int a,int b){
  string str = s.substr(0,a-1) + s[b-1] + s.substr(a,b-a-1) + s[a-1] + s.substr(b);
  return str;
}

string t2(string s,int n){
  string str = s.substr(n) + s.substr(0,n);
  return str;
}

int main(){
  int n,q;
  string s;
  cin >> n >> s >> q;
  loop(i,q){
    int t,a,b;
    cin >> t >> a >> b;
    if(t==1){ s=t1(s,a,b); }
    else{ s=t2(s,n); }
  }
  cout << s << endl;
  return 0;
}