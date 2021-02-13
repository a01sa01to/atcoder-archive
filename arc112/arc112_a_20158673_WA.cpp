/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc112/submissions/20158673
 * Submitted at: 2021-02-13 22:34:56
 * Problem URL: https://atcoder.jp/contests/arc112/tasks/arc112_a
 * Result: WA
 * Execution Time: 2205 ms
 */

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
  ll T;
  cin >> T;
  for(ll i=0;i<T;i++){
    ll L,R;
    ll count = 0;
    cin >> L >> R;
    for(ll A=(R+L)/2;A<=R;A++){
      ll _ = min(R,A-L) - max(L,A-R) + 1;
      count += (_<0?0:_);
    }
    cout << count << endl;
  }
  return 0;
}