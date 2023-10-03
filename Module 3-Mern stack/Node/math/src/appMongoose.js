const { connect } = require("mongoose");

const MONGO_URL =
  "mongodb+srv://12010599:Siddhu@12010599@cluster0.tkomshe.mongodb.net";

const DB_NAME = `cs-mern`;

async function connectDb() {
  try {
    await connect(`${MONGO_URL}/${DB_NAME}`);
    console.log(`MongoDb connected.`);
  } catch (err) {
    console.log(err);
  }
}

connectDb();
