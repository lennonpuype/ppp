
const init = () => {
  console.log("In de script.js");
  // const body = document.querySelector(`.body`);
  // console.log(body);

  // body.innerHTML = `<script src="./js/sketch.js"></script>`;
}

//let socket;

// function setup() {
//   createCanvas(300, 300);
//   background("#000000");

//   socket = io.connect('http://localhost:3000');
//   socket.on('mouse', newDrawing);
// }

// function newDrawing(data) {
//   noStroke();
//   ellipse(data.x, data.y, 10, 10);
// }

// function mouseDragged() {
//   console.log("Sending: " + mouseX + "," + mouseY);

//   const data = {
//     x: mouseX,
//     y: mouseY
//   }

//   socket.emit('mouse', data);

//   noStroke();
//   ellipse(mouseX, mouseY, 10, 10);
// }

init();
