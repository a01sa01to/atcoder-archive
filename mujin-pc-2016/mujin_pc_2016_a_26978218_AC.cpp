/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/mujin-pc-2016/submissions/26978218
 * Submitted at: 2021-11-01 23:03:22
 * Problem URL: https://atcoder.jp/contests/mujin-pc-2016/tasks/mujin_pc_2016_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<iostream>
int main(){
  char c;std::cin>>c;
  switch(c){
    case 'K':
    case 'O':
    case 'L':
    case 'P':
      puts("Right");
      break;
    default:
      puts("Left");
      break;
  }
}