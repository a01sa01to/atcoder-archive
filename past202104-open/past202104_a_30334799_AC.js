/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202104-open/submissions/30334799
 * Submitted at: 2022-03-22 00:36:11
 * Problem URL: https://atcoder.jp/contests/past202104-open/tasks/past202104_a
 * Result: AC
 * Execution Time: 188 ms
 */

(input=>{
  const [str] = input.split("\n");
  console.log(/\d{3}-\d{4}/.test(str)?"Yes":"No")
})(require("fs").readFileSync("/dev/stdin").toString())