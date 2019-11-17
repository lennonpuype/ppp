import React, { Component } from "react";
import "./App.css";
import DrawingCanvas from "./components/DrawingCanvas";

class App extends Component {
  constructor() {
    super(); //verplicht als je een constructor aanmaakt
  }



  render() {
    return <DrawingCanvas />
  }
}

export default App;
