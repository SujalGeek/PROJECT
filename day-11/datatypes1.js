// Primitive and non-Primitive types
//  7 types :String ,Number,Boolean,null,undefined,Symbol
// Bigint
console.log(1-"1"+"1");
console.log("1"+"1"-1);
const loggedin=false;
const score =100.3;
const myname="Sujal";
const number=100;
const outsideTemp=null;
let userEmail;// undefined
// Values same di hai but return alag hai bhai
const id=Symbol('123');
const anotherId=Symbol('123');
console.log(id==anotherId);

const bigNumber =2334334311313243n;

// Non primitive
const heros=["shaktiman","naaraj","doga"];
let myobj={
  name:"sujal",
  age:20
}

  
const myfun=function () {
 console.log("Hello World!"); 
}

console.log(typeof bigNumber);
console.log(typeof outsideTemp);
// non primitive ka datatype hai function hai
console.log(typeof myfun);