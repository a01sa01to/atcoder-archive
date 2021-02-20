/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc192/submissions/20329743
 * Submitted at: 2021-02-20 22:21:14
 * Problem URL: https://atcoder.jp/contests/abc192/tasks/abc192_d
 * Result: WA
 * Execution Time: 80 ms
 */

const { parse } = require("path");

(input=>{
	input = input.split("\n");
	const x = input[0];
  const m = input[1];
  let digit = 10;
  for(let i=9;i>0;i--){
    if(x.includes(String(i))){
      digit = i;
      break;
    }
  }
  let count = 0;
  for(let i=digit;i<37;i++){
    if(parseInt(x,i) <= parseInt(m)){
      count++;
    }
  }
  console.log(count);
})(require("fs").readFileSync("/dev/stdin", "utf8"));