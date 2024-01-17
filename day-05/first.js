const accountId = 132221;
let accountName ="Sujal";
var accountEmailid ="skjds@google";
accountCity ="Vadodara";
let accountState;
/**
 In javascript if we decalare the variable and not assign it then it will automicatially assign as
 undefined
*/
// accountId =3
accountName ="Meet";
accountEmailid ="sujal@google";
accountCity ="Anand";
console.log(accountName);
console.table([accountEmailid,accountId,accountName,accountCity,accountState]);

// Because of scope persepective we generally use the let keyword for variables 
// and for not changing anything we use the const keyword 