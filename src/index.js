import mongoose, { Schema } from "mongoose";
import  dbConnect  from "./db/index.js";

await dbConnect().then(()=>{
  console.log("connected");
})

const youschema = new Schema({
  name: {
    type: String,
    required: true
  }
},{timestamps:false})

const Sujal = mongoose.model('You',youschema);

const s = new Sujal()
await s.save()
console.log("Added");

await Sujal.findOneAndUpdate({name: "Mahesh"}, {
  $set: {name: "Yash"}
})
await s.save()