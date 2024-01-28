// Read the documentation also

let mydate=new Date();

// String ma convert karke readable form ma alaya bhai
console.log(mydate.toString());
console.log(mydate.toISOString());     
// Dono ma time aur date bataya hai time milisecond ma batya hai
console.log((mydate.toJSON()));     
// Dono ma time aur date bataya hai time milisecond ma batya hai
// Now downward wala ma full date and day bataya hai
console.log((mydate.toDateString()));
// Local ma 2 hai date wala aur time wala Date wala ma proper date bataya hai aur time wala ma
// proper time  
console.log((mydate.toLocaleString()));
console.log(mydate.toLocaleDateString());
console.log(mydate.toLocaleTimeString());
console.log(typeof mydate);
// object

// Mycreateddate bhi kar saktha hai aur month jasa ke jan 0 index se shuru hota hai
const Mycreateddate =new Date(2024,0,29);
console.log(Mycreateddate.toDateString());

let createdate =new Date("2024-01-30");
console.log(createdate.toLocaleString());

let mytimeStamp = Date.now();
console.log(Math.floor(Date.now()/1000));

let newDate =new Date();
console.log(newDate.getMonth()+1);
console.log(newDate.getDay());

newDate.toLocaleString('default',{
  weekday: "long",
})