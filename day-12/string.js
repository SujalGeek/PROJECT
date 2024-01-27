const name="sujal";
const myrepo=30;
console.log(`Hello my name is ${name} and my repo count is ${myrepo}`);

// String ek object hai
// It is not a String
const gameName=new String('valorant-krunker-cs2');
console.log(gameName);
console.log(gameName[0]);
console.log(gameName.__proto__);


console.log(gameName.length);
console.log(gameName.toUpperCase());
console.log(gameName.charAt(4));
console.log(gameName.indexOf('o'));

const newString =gameName.substring(0,3);
console.log(newString);

const anothername =gameName.slice(-7,4);
console.log(anothername);
// trim start or trim end bhi hota trim means whitespaces ko hatana
const Stringone ="   sujal   ";
console.log(Stringone);
console.log(Stringone.trim());
// for replacing bhai
const url ="https://hitesh.com/hitesh%20choudhary";
console.log(url.replace('%20','-'));

// Boolean return type hoga bhai
console.log(url.includes('hitesh'));

console.log(gameName.split('-'));