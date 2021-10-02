/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc008/submissions/26269077
 * Submitted at: 2021-10-02 18:43:23
 * Problem URL: https://atcoder.jp/contests/abc008/tasks/abc008_2
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  map<string,int> mp;
  string maxim;
  cin >> maxim; mp[maxim]++;
  for(int i=1;i<n;i++){
  	string s;
    cin >> s;
    mp[s]++;
    if(mp[s] > mp[maxim]) maxim = s;
  }
  cout << maxim << endl;
}