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

import { useState } from "react";
import Task from "../components/Task";

const ToDoScreen = () => {
    const [taskList, setTaskList] = useState([]);
    return (
        <div className="screen" >
            <h1 className="ui heading center">To Do List </h1>
            <div>
                <button onClick={() => {
                    setTaskList([...taskList, {
                        title: "Go to Gym",
                        description: "Going to gym is good for muscle growth.",
                        createdDate: new Date(),
                    },
                    ]);
                }}
                    className="ui secondary button">Add Task</button>
                <section>
                <div class="ui cards">
                    {taskList.map((task, index) => (
                        <Task task={task} key=(index/>
                    ))}
                </div>
                </section>
            </div>
        </div >
    );
};

export default ToDoScreen;