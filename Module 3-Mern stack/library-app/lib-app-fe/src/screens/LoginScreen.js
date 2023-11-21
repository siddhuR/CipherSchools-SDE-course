import { useState } from "react";

const LoginScreen = () => {
  const [credentials, setCredentials] = useState({ email: "", password: "" });
  const handleLoginSubmit = async (e) => {
    e.preventDefault();
  };
  const handleInputChange = (e) => {
    setCredentials({ ...credentials, [e.target.name]: e.target.value });
  };

  return (
    <section className="app-section">
      <h1>Login</h1>
      <form className="ui form" onSubmit={handleLoginSubmit}>
        <div className="field">
          <label>Email</label>
          <input
            type="email"
            name="email"
            placeholder="Email"
            value={credentials.email}
            onChange={handleInputChange}
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
          />
        </div>

        <button className="ui button" type="submit">
          Submit
        </button>
      </form>
    </section>
  );
};

export default LoginScreen;
