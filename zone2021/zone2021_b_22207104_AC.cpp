/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/zone2021/submissions/22207104
 * Submitted at: 2021-05-01 21:20:37
 * Problem URL: https://atcoder.jp/contests/zone2021/tasks/zone2021_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned ll;
#define loop(i,n) for(ull i=0;i<n;i++)

int main(){
  double n, x, y;
  cin >> n >> x >> y;
  double maxH = 0;
  loop(i,n){
    double a,b;
    cin >> a >> b;
    maxH = max(maxH,(y-((y-b)/(x-a)*x)));
  }
  cout << maxH << endl;
  return 0;
}