/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc190/submissions/19802380
 * Submitted at: 2021-01-30 21:43:00
 * Problem URL: https://atcoder.jp/contests/abc190/tasks/abc190_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n,s,d;
  cin >> n >> s >> d;
  int x, y;
  bool isDamage = false;
  for(int i=0;i<n;i++){
    cin >> x >> y;
    if(x < s && y > d){
      isDamage = true;
    }
  }
  cout << (isDamage ? "Yes" : "No");
  return 0;
}