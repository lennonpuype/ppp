import openSocket from 'socket.io-client';
const socket = openSocket('http://192.168.1.5:4000');

//Sending Socket
socket.emit('drawing', 1);

socket.on('drawing', function (data) {
  helloWorld(data);
})