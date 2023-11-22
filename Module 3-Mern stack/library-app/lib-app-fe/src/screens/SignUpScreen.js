import { useState } from "react";
import { loginUser } from "../utils/AuthUtil";
import { Link, useNavigate } from "react-router-dom";
import { signUpUser } from "../apis/user-api";

const SignUpScreen = () => {
  //const [credentials, setCredentials] = useState({ email: "", password: "" });
  const [userData, setUserData] = useState({
    firstName: "",
    lastName: "",
    email: "",
    password: "",
    type: "STUDENT",
  });
  const Navigate = useNavigate();

  const handleLoginSubmit = async (e) => {
    e.preventDefault();
    //console.log(credentials);
    console.log(userData);
    if (validateData()) {
      const data = await signUpUser(userData);
      if (data.user.type === "LIBRARIAN") {
        Navigate("/librarian");
      } else {
        Navigate("/student");
      }
    }
  };

  const validateData = () => {
    return (
      userData.firstName?.length &&
      userData.lastName?.length &&
      userData.email?.length &&
      userData.password?.length
    );
  };

  const handleInputChange = (e) => {
    setUserData({ ...userData, [e.target.name]: e.target.value });
  };

  return (
    <section className="app-section">
      <h1>SignUp</h1>
      <span>
        Already have an account? Login <Link to={"/login"}>here</Link>
      </span>
      <form className="ui form" onSubmit={handleLoginSubmit}>
        <div class="field">
          <label>First Name</label>
          <input
            type="text"
            name="first-name"
            placeholder="First Name"
            required={true}
            onChange={handleInputChange}
            value={userData.firstName}
          />
        </div>
        <div class="field">
          <label>Last Name</label>
          <input
            type="text"
            name="last-name"
            placeholder="Last Name"
            required={true}
            onChange={handleInputChange}
            value={userData.lastName}
          />
        </div>

        <div className="field">
          <label>Email</label>
          <input
            type="email"
            name="email"
            placeholder="Email"
            value={userData.email}
            onChange={handleInputChange}
            required={true}
          />
        </div>
        <div className="field">
          <label>Password</label>
          <input
            type="password"
            name="password"
            placeholder="Password"
            value={userData.password}
            onChange={handleInputChange}
            required={true}
            minLength={8}
          />
        </div>
        <div class="ui segment">
          <div class="field">
            <div
              class="ui toggle checkbox"
              onClick={() => {
                setUserData({
                  ...userData,
                  type: userData.type === "LIBRARIAN" ? "STUDENT" : "LIBRARIAN",
                });
              }}
            >
              <input
                type="checkbox"
                name="gift"
                tabIndex="0"
                class="hidden"
                checked={userData.type === "LIBRARIAN"}
              />
              <label>Are you a Librarian?</label>
            </div>
          </div>
        </div>
        <button className="ui button" type="submit">
          Submit
        </button>
      </form>
    </section>
  );
};

export default SignUpScreen;
