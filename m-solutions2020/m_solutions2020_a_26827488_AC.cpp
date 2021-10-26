/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/m-solutions2020/submissions/26827488
 * Submitted at: 2021-10-26 17:58:05
 * Problem URL: https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin>>x;
  if(x<600)puts("8");
  else if(x<800)puts("7");
  else if(x<1000)puts("6");
  else if(x<1200)puts("5");
  else if(x<1400)puts("4");
  else if(x<1600)puts("3");
  else if(x<1800)puts("2");
  else puts("1");
}