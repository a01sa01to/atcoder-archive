/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/19846847
 * Submitted at: 2021-01-31 23:22:40
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_co
 * Result: AC
 * Execution Time: 8 ms
 */

#include <iostream>
#include <string>
using namespace std;
int main(){
  int pt,p,n;
  string desc;
  cin >> pt;
  if(pt-1){
    cin >> desc >> p >> n;
    cout << desc << "!" << endl;
  }
  else{
    cin >> p >> n;
  }
  cout << p*n << endl;
  return 0;
}