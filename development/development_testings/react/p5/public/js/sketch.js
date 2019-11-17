let socket;
let started = false;

function setup() {
  createCanvas(300, 300);
  background("#000000");

  socket = io.connect('http://localhost:3000');
  socket.on('mouse', newDrawing);

  noLoop();
}

function startEverything() {
  started = true;
  loop();
}

function newDrawing(data) {
  noStroke();
  ellipse(data.x, data.y, 10, 10);
}

function mouseDragged() {
  if (started) {
    console.log("Sending: " + mouseX + "," + mouseY);

    const data = {
      x: mouseX,
      y: mouseY
    }

    socket.emit('mouse', data);

    noStroke();
    ellipse(mouseX, mouseY, 10, 10);
  }
}

