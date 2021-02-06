/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc191/submissions/19961641
 * Submitted at: 2021-02-06 21:06:43
 * Problem URL: https://atcoder.jp/contests/abc191/tasks/abc191_b
 * Result: AC
 * Execution Time: 84 ms
 */

function Main(input) {
  input = input.split("\n");
  const x = input[0].split(" ")[1];
  const arr = input[1].split(" ");
  console.log(arr.filter(_=>_!==x).join(" "));
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));