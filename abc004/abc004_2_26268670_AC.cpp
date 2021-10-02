/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc004/submissions/26268670
 * Submitted at: 2021-10-02 18:20:08
 * Problem URL: https://atcoder.jp/contests/abc004/tasks/abc004_2
 * Result: AC
 * Execution Time: 9 ms
 */

#include<iostream>
main(){char v[4][4];
for(int i=0;i<4;i++)std::cin>>v[i][0]>>v[i][1]>>v[i][2]>>v[i][3];
for(int i=3;i>=0;i--)printf("%c %c %c %c\n",v[i][3],v[i][2],v[i][1],v[i][0]);
}