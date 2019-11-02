import React, { Component } from "react";


class Canvas extends Component {
  constructor() {
    super();
    this.repeat = this.repeat.bind(this)
  }

  componentDidMount() {
    this.canvas = this.refs.canvas
    this.ctx = this.canvas.getContext("2d")
    this.ctx.fillRect(0, 0, 100, 100);
  }

  repeat() {
    console.log("jkdljldfskdfsj");
    this.t = setTimeout(this.repeat, this.start)
    this.start = this.start / 2
  }

  handleMouseDown = () => {
    this.repeat();
  }


  handleMouseUp = () => {
    clearTimeout(this.t);
    this.start = 100;
  }

  render() {
    return (
      <>
        <canvas ref="canvas" onMouseDown={this.handleMouseDown} onMouseUp={this.handleMouseUp}></canvas>
      </>
    );
  }
}

export default Canvas;
