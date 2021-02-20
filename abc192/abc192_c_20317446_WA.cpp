/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc192/submissions/20317446
 * Submitted at: 2021-02-20 21:53:05
 * Problem URL: https://atcoder.jp/contests/abc192/tasks/abc192_c
 * Result: WA
 * Execution Time: 7 ms
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

string f(string n){
  vector<int> v;
  int l = n.length();
  for(int i=0;i<l;i++){
    v.push_back((int)(n[i] - '0'));
  }
  vector<int> max_v,min_v;
  sort(v.begin(),v.end());
  min_v = v;
  sort(v.begin(),v.end(),greater<int>());
  max_v = v;

  ll max=0;
  ll min=0;
  for(int i=0;i<l;i++){
    max += max_v[i] * pow(10,l-i-1);
    min += min_v[i] * pow(10,l-i-1);
  }
  return to_string(max-min);
}

int main(){
  string n;
  int k;
  cin >> n >> k;
  if(k==0){
    cout << n << endl;
    return 0;
  }
  else if(k==1){
    cout << f(n) << endl;
  }
  else{
    cout << f(f(n)) << endl;
  }
  return 0;
}