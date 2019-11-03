import React, { Component } from "react";
import "./App.css";
import DrawingCanvas from "./components/DrawingCanvas";
import StillCanvas from "./components/StillCanvas";

class App extends Component {
  constructor() {
    super(); //verplicht als je een constructor aanmaakt
    this.state = {};
  }


  render() {
    return (
      <><DrawingCanvas />
        <StillCanvas /></>
    );
  }
}

export default App;
