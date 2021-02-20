/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc192/submissions/20335342
 * Submitted at: 2021-02-20 22:33:06
 * Problem URL: https://atcoder.jp/contests/abc192/tasks/abc192_d
 * Result: TLE
 * Execution Time: 2207 ms
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
  const l = x.length
  while(true){
    digit++;
    let a = 0;
    for(let j=0;j<l;j++){
      a += x[j] * (digit**(l-j-1));
    }

    if(a <= parseInt(m)){
      count++;
    }
    else{
      break;
    }
  }
  console.log(count);
})(require("fs").readFileSync("/dev/stdin", "utf8"));