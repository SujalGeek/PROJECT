// Math library aati hai javascript ma usko dhyan se use karna hota hai
console.log(Math);
// object type hua na 
// Absolute ka kaam hoga negative values ka pos karna
console.log(Math.abs(-4));
console.log(Math.round(4.6));
console.log(Math.ceil(4.2));
console.log(Math.floor(4.9)); 
console.log(Math.min(4,5,6,2));
console.log(Math.max(4,5,6,2));

// Random ki value 0 or 1 ke beech ma
console.log(Math.random());
console.log((Math.random()*10)+1);
console.log(Math.floor(Math.random()*10)+1);

const min =10;
const max=20;
// +1 isliye kiya to avoid the 0 max -min kiye kyuki uss range ma aana chaiye
console.log(Math.floor(Math.random()*(max-min+1))+min);