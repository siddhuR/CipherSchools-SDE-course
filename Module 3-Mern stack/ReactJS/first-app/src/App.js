// import { Component } from "react";
import ToDoScreen from "./screens/ToDoScreen";
import { createBrowserRouter } from "react-router-dom";
import AddTask from "./components/AddTask";
import { RouterProvider } from "react-router-dom";
import { TaskProvider } from "./context/TaskContext";
import { useContext } from "react";
import TaskContext from "./context/TaskContext";


// class App extends Component {
//     render() {
//         return <ToDoScreen />
//     }
// }



const router = createBrowserRouter([
    {
        path: "/",
        element: <ToDoScreen />,
    },
    {
        path: "/add-task",
        element: <AddTask />,
    },
]);

const App = () => {

    //const { taskList, addNewTask } = useContext(TaskContext);

    //return <ToDoScreen />
    // const [tasks, setTasks] = useState([]);
    return (
        <TaskProvider>
            <RouterProvider router={router} />;
        </TaskProvider>
    );
};

export default App;