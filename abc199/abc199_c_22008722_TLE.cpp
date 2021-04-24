/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/22008722
 * Submitted at: 2021-04-24 21:17:01
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)

string t1(string s,int a,int b){
  string str = "";
  loop(i,a-1){ str += s[i]; }
  str += s[b-1];
  for(int i=a;i<b-1;i++){ str += s[i]; }
  str += s[a-1];
  for(int i=b;i<s.size();i++){ str += s[i]; }
  return str;
}

string t2(string s,int n){
  string str = "";
  loop(i,n){ str += s[n+i]; }
  loop(i,n){ str += s[i]; }
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