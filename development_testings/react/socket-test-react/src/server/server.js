const express = require("express");
const socket = require('socket.io');

const app = express();
const server = app.listen(4000, function () {
  console.log('listening on port 4000');
})

//Static files
app.use(express.static('./../../public'))

//Socket setup
var io = socket(server);

io.on('connection', function (socket) {
  console.log("Socket Connected");

  socket.on('drawing', function (data) {
    console.log(data);
    io.sockets.emit('drawing', data)

  })
})