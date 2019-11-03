import React, { Component } from "react";
import Sketch from 'react-p5';
import openSocket from 'socket.io-client';



class StillCanvas extends Component {

  setup = (p5, canvasParentRef) => {
    p5.createCanvas(500, 500).parent(canvasParentRef)
    p5.background("#000000");

    this.pfive = p5;

    this.socket = openSocket('http://localhost:4000');
    this.socket.on('mouse', data => {
      this.newDrawing(p5, data);
    });
  }

  newDrawing = (p5, data) => {
    p5.noStroke();
    p5.ellipse(data.x, data.y, 10, 10);
  }


  render() {
    return <Sketch setup={this.setup} noLoop={this.newDrawing} />
  }
}

export default StillCanvas;
