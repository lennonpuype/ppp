import React, { Component } from "react";
import "./App.css";
import DrawingCanvas from "./components/DrawingCanvas";
import StillCanvas from "./components/StillCanvas";
import openSocket from 'socket.io-client';

class App extends Component {
  constructor() {
    super(); //verplicht als je een constructor aanmaakt
    this.state = {
      user: ``
    };

    this.socket = openSocket('http://localhost:4000');
    this.socket.on('user', data => {
      this.newUserStatus(data);
    });
  }

  newUserStatus = data => {
    this.setState({ user: data.status });
    console.log(data);
  }

  handleClickBtn = e => {
    //this.setState({ user: e.target.id });

    const data = {
      status: e.target.id,
      name: "Lennon"
    }

    console.log("Set status " + e.target.id + " to socket");

    this.socket.emit('user', data);
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
