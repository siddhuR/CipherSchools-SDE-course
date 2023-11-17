const jwt = require("jsonwebtoken");
const CS_LIB_APP_SIGN = "CS_LIB-AppSign";

const generateToken = ({ _id, type }) => {
  const token = jwt.sign({ _id, type }, CS_LIB_APP_SIGN);
  return token;
};

const verifyToken = (token) => {
  try {
    const payload = jwt.verify(token, CS_LIB_APP_SIGN);
    return { states: true, payload };
  } catch (err) {
    console.error(err);
    return { status: false, payload: underfined };
  }
};

module.exports = { generateToken, verifyToken };
