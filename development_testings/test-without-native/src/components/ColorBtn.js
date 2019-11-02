import React, { Component } from 'react';


class ColorBtn extends Component {

  constructor({ onButtonClick, color }) {
    super();
    this.button = React.createRef();
    this.onButtonClick = onButtonClick;
    this.color = color;
  }

  handleClickButton = () => {
    const color = this.button.current.textContent.toLowerCase();
    console.log(color);

    this.onButtonClick(color);
  }

  render() {

    return (
      <>
        <button onClick={this.handleClickButton} class={`${this.color.toLowerCase()}-btn color-button`} ref={this.button}>{this.color}</button>
      </>
    );
  }


}

export default ColorBtn;
