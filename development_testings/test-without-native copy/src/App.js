import React, { Component } from 'react';
import logo from './logo.svg';
import './App.css';
import CanvasDraw from "react-canvas-draw";
import ColorBtn from "./components/ColorBtn";
import FunctionBtn from "./components/FunctionBtn";
import Iframe from 'react-iframe'

class App extends Component {

  constructor() {
    super();
    this.state = {
      activeColor: "#FF0000"
    }


  }

  handleClickColor = color => {
    let parsedColor = "";

    if (color === "red") {
      parsedColor = "#FF0000"
    }

    if (color === "blue") {
      parsedColor = "#0000FF"
    }

    if (color === "green") {
      parsedColor = "#00FF00"
    }

    this.setState({ activeColor: parsedColor })
  }

  handleDoSomethingWithCanvas = action => {
    if (action === `clear`) {
      this.theCanvas.clear();
    }

    if (action === `undo`) {
      this.theCanvas.undo();
    }
  }

  render() {
    const { activeColor } = this.state;

    return (
      <div className="App" >
        <CanvasDraw gridColor="#FFF" className="canvas" lazyRadius={0} brushRadius={5} ref={canvasDraw => { this.theCanvas = canvasDraw }} brushColor={activeColor} catenaryColor="rgba(0,0,0,0)" />
        <div className="color-buttons">
          <ColorBtn onButtonClick={this.handleClickColor} color="Red" />
          <ColorBtn onButtonClick={this.handleClickColor} color="Blue" />
          <ColorBtn onButtonClick={this.handleClickColor} color="Green" />
        </div>
        <div className="function-buttons">
          <FunctionBtn onButtonClick={this.handleDoSomethingWithCanvas} action="Clear" />
          <FunctionBtn onButtonClick={this.handleDoSomethingWithCanvas} action="Undo" />
        </div>
        <Iframe url="http://localhost:3000"
          width="450px"
          height="450px"
          id="myId"
          className="myClassname"
          display="initial"
          position="relative" />
      </div >

    );
  }
}

export default App;
