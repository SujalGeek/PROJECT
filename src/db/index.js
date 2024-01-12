import mongoose from "mongoose";

const dbConnect =async ()=>{
  try {
    console.log();
    await mongoose.connect("mongodb://127.0.0.1:27017/name")
    console.log("conected");
  } catch (error) {
    console.log(error);
  }
}

export default dbConnect