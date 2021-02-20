/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc192/submissions/20327354
 * Submitted at: 2021-02-20 22:15:47
 * Problem URL: https://atcoder.jp/contests/abc192/tasks/abc192_d
 * Result: WA
 * Execution Time: 68 ms
 */

const { parse } = require("path");

(input=>{
	// 1行目がinput[0], 2行目がinput[1], …に入る
	input = input.split("\n");
	const x = input[0];
  const m = input[1];
  let digit = 10;
  let min = 0;
  for(let i=9;i>0;i--){
    if(x.includes(String(i))){
      digit = i;
      break;
    }
  }
  for(let i=1;i<10;i++){
    if(x.includes(String(i))){
      min = i;
      break;
    }
  }
  let count = 0;
  if(min >= digit){ digit = min+1; }
  while(true){
    if(parseInt(x,digit) <= parseInt(m)){
      count++;
      digit++;
    }
    else{
      break;
    }
  }
  console.log(count);
})(require("fs").readFileSync("/dev/stdin", "utf8"));