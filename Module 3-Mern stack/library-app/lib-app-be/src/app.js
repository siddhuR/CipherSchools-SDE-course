require("./appMongoose");
const express = require("express");
const cors = require("cors");
const userRoute = require("./routes/user-routes");
const app = express();

app.use(cors());
app.use(express.json());

app.use("/user", userRoute);

app.listen(8080, () => {
  console.log(`Library App Backend is runnning on port 8080`);
});
