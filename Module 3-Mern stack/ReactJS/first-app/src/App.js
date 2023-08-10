import logo from './logo.svg';
import './App.css';

function App() {
  const NAME="WORLD"
  return (
    <>
      <div>
        <h1 style={{
          color: "red",
          textAlign: "center",
        }}> Hello {NAME}...!</h1>
      </div>
      <div>
        <p>This is {NAME}</p>
      </div>
    </>

  );
  
}

export default App;
