/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/cf17-final/submissions/27293000
 * Submitted at: 2021-11-16 22:30:40
 * Problem URL: https://atcoder.jp/contests/cf17-final/tasks/cf17_final_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  set<string> ok;
  // 0
  ok.insert("KIHBR");
  // 1
  ok.insert("AKIHBR");
  ok.insert("KIHABR");
  ok.insert("KIHBAR");
  ok.insert("KIHBRA");
  // 2
  ok.insert("AKIHABR");
  ok.insert("AKIHBAR");
  ok.insert("AKIHBRA");
  ok.insert("KIHABAR");
  ok.insert("KIHABRA");
  ok.insert("KIHBARA");
  // 3
  ok.insert("AKIHABAR");
  ok.insert("AKIHBARA");
  ok.insert("AKIHABRA");
  ok.insert("KIHABARA");
  // 4
  ok.insert("AKIHABARA");
  puts(ok.count(s)?"YES":"NO");
}