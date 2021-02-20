/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc192/submissions/20328041
 * Submitted at: 2021-02-20 22:17:22
 * Problem URL: https://atcoder.jp/contests/abc192/tasks/abc192_d
 * Result: WA
 * Execution Time: 64 ms
 */

const { parse } = require("path");

(input=>{
	// 1行目がinput[0], 2行目がinput[1], …に入る
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

  while(true){
    digit++;
    if(parseInt(x,digit) <= parseInt(m)){
      count++;
    }
    else{
      break;
    }
  }
  console.log(count);
})(require("fs").readFileSync("/dev/stdin", "utf8"));