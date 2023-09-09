// import { Component } from "react";
import ToDoScreen from "./screens/ToDoScreen";
import { createBrowserRouter } from "react-router-dom";
import AddTask from "./components/AddTask";
import { RouterProvider } from "react-router-dom";

const router = createBrowserRouter([
    {
        path: "/",
        element: <ToDoScreen />
    },
    {
        path: "/add-task",
        element: <AddTask />
    },
]);
// class App extends Component {
//     render() {
//         return <ToDoScreen />
//     }
// }

const App = () => {
    //return <ToDoScreen />
    const [tasks, setTasks] = useState([]);
    return <RouterProvider router={router} />;
};

export default App;