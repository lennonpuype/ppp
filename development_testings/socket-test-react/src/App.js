import React, { Component } from 'react';
import logo from './logo.svg';
import './App.css';



const App = () => {

  let dataVar = null;

  function helloWorld(data) {
    dataVar = data;
  }


  if (dataVar !== null) {
    return (
      <div className="App">
        <header className="App-header">
          <img src={logo} className="App-logo" alt="logo" />

          <p className="App-intro">This is a test</p>

        </header>
      </div>
    );
  } else {
    return (<></>)
  }



}

export default App;
