/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc197/submissions/21319750
 * Submitted at: 2021-03-27 22:23:45
 * Problem URL: https://atcoder.jp/contests/abc197/tasks/abc197_c
 * Result: AC
 * Execution Time: 177 ms
 */

#include <bits/stdc++.h>
#include <bitset>
#include <algorithm>
using namespace std;
#define loop(n,i) for(int i=0;i<n;i++)

int main(){
  int n;
  cin >> n;
  vector<int> a;
  loop(n,i){
    int _a;
    cin >> _a;
    a.push_back(_a);
  }
  int minim = 1316134912;
  for(int i=0;i<pow(2,n-1);i++){
    string bin = bitset<64>(i).to_string();
    vector<int> s;
    int prev = a[0];
    for(int j=1;j<n;j++){
      if(bin[bin.size()-j] == '1'){
        s.push_back(prev);
        prev = a[j];
      }
      else{
        prev |= a[j];
      }
    }
    s.push_back(prev);
    prev = s[0];
    for(int j=1;j<s.size();j++){
      prev ^= s[j];
    }
    minim = min(minim,prev);
  }
  cout << minim << endl;
  return 0;
}