import React from 'react'
import Search from '../search/Search'
import './Task.css';
function Task() {
  return (
    <div>
      <div>
        <Search/>
      </div>
      <div className='task-main-container'>
        <div className='task-container'>
            <div className='task-heading'>
                <h1>Tasks</h1>
            </div>
        <div className='task-card-container'>
            <div className='task-card'>
                <p>Do homework</p>
            </div>
            <div className='task-btn-container'>
                <button>Edit</button>
                <button>Delete</button>
            </div>
        </div>
        </div>
      </div>
    </div>
  )
}

export default Task
