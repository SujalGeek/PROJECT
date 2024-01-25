// Primitive types ka storeage ke liye STACK HOTA HAI HA
// JS AND NON-PRIMITIVE TYPE KE LIYE HEAP HOTA HAI
let myname="sujal";
let anothername=myname;
anothername="sujan";
console.log(myname);
// Jab bhi stack ma jata hai ta uska ek copy jata hai
console.log(anothername);
// Refrenence hota hai HEAP MA TOH  
let userOne ={
  email:"user@google.com",
  upi:"user@sbi"
}

let userTwo ={
  email:"user@google.com",
  upi:"user@sbi"
}
let userTwo3=userOne
userTwo3.email="moa@gmail.com";
console.log(userOne.email);
console.log(userTwo3.email);