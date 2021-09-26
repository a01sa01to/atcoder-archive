/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc220/submissions/26130196
 * Submitted at: 2021-09-26 21:08:47
 * Problem URL: https://atcoder.jp/contests/abc220/tasks/abc220_b
 * Result: AC
 * Execution Time: 60 ms
 */

((input)=>{
	input = input.split("\n");
	tmp = input[1].split(" ");
	var k = parseInt(input[0], 10);
	var a = parseInt(tmp[0], k);
	var b = parseInt(tmp[1], k);
	console.log(a*b);
})(require("fs").readFileSync("/dev/stdin", "utf8"));