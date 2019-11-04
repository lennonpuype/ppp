//In this script you can call specificelements with querySelector that are build from librariexport des.
export default class SideScript {

  constructor() {
    this.stopPropagationImmidiately();
  }

  stopPropagationImmidiately() {
    const $canvas = document.querySelector(`.canvas`);
    $canvas.addEventListener(`mousedown`, e => {
      e.preventDefault();
      e.stopPropagation();
    })
  }

}

