const { connect } = require("mongoose");

const MONgo_DB_URL =
  "mongodb+srv://root:roota@tutoraccluster.udjbndb.mongo.net";

const DB_NAME = "cs-library-app";
const connectDB = async () => {
  try {
    await connect(`${MONGO_DB_URL}/${DB_NAME}`);
    console.log(`MongoDB Connection is Successful.`);
  } catch (err) {
    console.error(err);
  }
};

connectDB();
module.exports = {};
