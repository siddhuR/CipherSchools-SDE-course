const InputValidationException = require("../exceptions/inputValidationException");
// const User = require("../models/user");
const userService = require("../services/userService");

const addNumber = async (req, res) => {
  try {
    const { firstName, lastName, email, password, type } = req.body;
    let user = {
      firstName,
      lastName,
      email,
      password,
      type,
    };
    user = await userService.addNewUser(user);
    return res.status(200).send(user);
  } catch (err) {
    console.error(err);
    return res
      .status(err instanceof InputValidationException ? 400 : 500)
      .send({ message: err.message });
  }
};

module.exports = { addNewUser };
