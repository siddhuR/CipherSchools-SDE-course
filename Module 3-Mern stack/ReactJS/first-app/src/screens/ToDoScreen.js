// import { Component } from "react";

// class ToDoScreen extends Component {

//     state = {
//         taskCount: 0,
//     };
//     render() {
//         return (
//             <div className="screen">
//                 <h1 className="ui heading center">To Do List </h1>
//                 <div>
//                     <button onClick={() => {
//                         this.setState({...this.state, taskCount: this.state.taskCount + 1,
//                         });
//                         console.log(this.state.taskCount);
//                     }} className="ui secondary button">Add Task</button>
//                     <p>The number of task are: {this.state.taskCount}</p>
//                 </div>
//             </div>
//         );
//     }
// }

import { useContext } from "react";
import Task from "../components/Task";
import AddTask from "../components/AddTask";
import TaskContext from "../context/TaskContext";
import { useNavigate } from "react-router-dom";

const ToDoScreen = () => {
    const { taskList } = useContext(TaskContext);
    const navigate = useNavigate();

    // let addNewTask = (task) => {
    //     setTaskList([...taskList, {...task, createdDate: new Date()}]);
    // };


    return (
        <>
            <div className="screen" >
                <h1 className="ui heading center">To Do List </h1>
                <div>
                    <button onClick={() => {
                        navigate("/add-task");
                        // setTaskList([...taskList, {
                        //     title: "Go to Gym",
                        //     description: "Going to gym is good for muscle growth.",
                        //     createdDate: new Date(),
                        // },
                        // ]);
                    }}
                        className="ui secondary button">Add Task</button>
                    <section>
                        <div className="ui cards">
                            {taskList.map((task, index) => (
                                <Task task={task} key={index} />
                            ))}
                        </div>
                    </section>
                </div>
                {/* <AddTask onSubmit={addNewTask}/> */}
            </div >

        </>

    );
};

export default ToDoScreen;