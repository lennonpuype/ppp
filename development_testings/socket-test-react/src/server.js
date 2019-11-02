var app = require("express")();
var http = require("http").Server(app);
var io = require("socket.io")(http);

const port = 8000;

io.on("connection", function (socket) {
  socket.on('subscribeToTimer', () => {
    console.log('Now');

  });
});

http.listen(port, function () {
  console.log(`listening on *:${port}`);
});
