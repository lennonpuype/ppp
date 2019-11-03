import React, { Component } from "react";
import Sketch from 'react-p5';
import openSocket from 'socket.io-client';
class DrawingCanvas extends Component {

  setup = (p5, canvasParentRef) => {
    p5.createCanvas(500, 500).parent(canvasParentRef)
    p5.background("#000000");

    this.socket = openSocket('http://localhost:4000');
  }

  mouseDragged = (p5) => {
    console.log("Sending: " + p5.mouseX + "," + p5.mouseY);

    const data = {
      x: p5.mouseX,
      y: p5.mouseY
    }

    this.socket.emit('mouse', data);

    p5.noStroke();
    p5.ellipse(p5.mouseX, p5.mouseY, 10, 10);
  }

  render() {
    return <Sketch setup={this.setup} mouseDragged={this.mouseDragged} />
  }
}

export default DrawingCanvas;
