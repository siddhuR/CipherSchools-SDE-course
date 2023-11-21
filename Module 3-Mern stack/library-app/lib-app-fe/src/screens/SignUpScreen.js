import { useState } from "react";
import { loginUser } from "../utils/AuthUtil";
import { useNavigate } from "react-router-dom";

const SignUpScreen = () => {
  const [credentials, setCredentials] = useState({ email: "", password: "" });
  const Navigate = useNavigate();

  const handleLoginSubmit = async (e) => {
    e.preventDefault();
    console.log(credentials);
    if (validateCredentials()) {
      const data = await loginUser(credentials);
      if (data.user.type === "LIBRARIAN") {
        Navigate("/librarian");
      } else {
        Navigate("/student");
      }
    }
  };

  const validateCredentials = () => {
    return credentials.email?.length && credentials.password?.length;
  };

  const handleInputChange = (e) => {
    setCredentials({ ...credentials, [e.target.name]: e.target.value });
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
          <input type="text" name="first-name" placeholder="First Name" />
        </div>
        <div class="field">
          <label>Last Name</label>
          <input type="text" name="last-name" placeholder="Last Name" />
        </div>

        <div className="field">
          <label>Email</label>
          <input
            type="email"
            name="email"
            placeholder="Email"
            value={credentials.email}
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
            value={credentials.password}
            onChange={handleInputChange}
            required={true}
            minLength={8}
          />
        </div>

        <button className="ui button" type="submit">
          Submit
        </button>
      </form>
    </section>
  );
};

export default SignUpScreen;
