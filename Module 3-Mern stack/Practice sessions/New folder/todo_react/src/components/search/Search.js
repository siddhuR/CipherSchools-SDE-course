import React from 'react'
import './search.css';

function Search() {
    return (
        <div className='search-main-container'>
            <div>
                <h1>Todo Application</h1>
                <div className='search-container'>
                    <input type='text' className='search' placeholder='Add Task'/>
                    <button>Add</button>
                </div>
            </div>
        </div>
    )
}

export default Search
