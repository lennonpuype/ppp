import React, { Component } from "react";
import "./App.css";
import Canvas from "./components/Canvas"

class App extends Component {
  constructor() {
    super(); //verplicht als je een constructor aanmaakt
    this.state = {};
  }


  render() {
    return (
      <><Canvas /></>
    );
  }
}

export default App;
