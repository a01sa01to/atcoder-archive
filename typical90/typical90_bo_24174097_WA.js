/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/24174097
 * Submitted at: 2021-07-12 10:43:02
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bo
 * Result: WA
 * Execution Time: 60 ms
 */

(_=>{let a=_.split(" ");let b=a[0];for(let i=0;i<a[1];i++){b=parseInt(b,8).toString(9).replace(/8/g,"5")}console.log(b.toString(8))})(require("fs").readFileSync("/dev/stdin", "utf8"))