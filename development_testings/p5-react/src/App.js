import React, { Component } from "react";
import "./App.css";
import DrawingCanvas from "./components/DrawingCanvas";
import StillCanvas from "./components/StillCanvas";

class App extends Component {
  constructor() {
    super(); //verplicht als je een constructor aanmaakt
    this.state = {
      user: ``
    };
  }

  handleClickBtn = e => {
    this.setState({ user: e.target.id });
  }

  render() {
    const { user } = this.state;

    if (user === ``) {
      return (
        <>
          <button onClick={this.handleClickBtn} id="host">Host Game</button>
          <button onClick={this.handleClickBtn} id="join">Join Game</button>
        </>
      )
    } else {
      if (user === `host`) {
        console.log("Hosting the game");

        return <DrawingCanvas />
      }

      if (user === `join`) {
        console.log("Joining the game");
        return <StillCanvas />
      }
    }
  }
}

export default App;
