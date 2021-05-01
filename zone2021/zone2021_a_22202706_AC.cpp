/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/zone2021/submissions/22202706
 * Submitted at: 2021-05-01 21:10:30
 * Problem URL: https://atcoder.jp/contests/zone2021/tasks/zone2021_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned ll;
#define loop(i,n) for(ull i=0;i<n;i++)

int main(){
  string s;
  cin >> s;
  int c = 0;
  for(string::size_type pos=0;(pos=s.find("ZONe",pos))!=string::npos; pos+=4){
    c++;
  }
  cout << c << endl;
  return 0;
}