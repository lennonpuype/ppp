import React, { Component } from 'react';


class FunctionBtn extends Component {

  constructor({ onButtonClick, action }) {
    super();
    this.button = React.createRef();
    this.onButtonClick = onButtonClick;
    this.action = action;
  }

  handleClickButton = () => {
    const action = this.button.current.textContent.toLowerCase();
    this.onButtonClick(action);
  }

  render() {
    return (
      <>
        <button onClick={this.handleClickButton} ref={this.button}>{this.action}</button>
      </>
    );
  }


}

export default FunctionBtn;
