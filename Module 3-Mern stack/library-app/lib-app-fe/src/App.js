import "./App.css";
import { createBrowserRouter, RouterProvider } from "react-router-dom";
import LoginScreen from "./screens/LoginScreen";

const router = createBrowserRouter([
  { path: "/login", element: <LoginScreen /> },
  { path: "/signup", element: <h1>signup Page</h1> },
  { path: "/librarian", element: <h1>Librarian Screen</h1> },
  { path: "/student", element: <h1>Student Screen</h1> },
]);

function App() {
  return <RouterProvider router={router} />;
}

export default App;
