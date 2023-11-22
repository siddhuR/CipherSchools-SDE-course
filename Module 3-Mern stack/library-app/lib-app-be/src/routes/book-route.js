const express = require("express");
const router = express.Router();
const bookController = require("../controllers/book-controller");

router.post("/add", bookController.addBook);
router.get("/all", bookController.getAllBooks);

module.exports = router;
