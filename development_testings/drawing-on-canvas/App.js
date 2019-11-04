import React from 'react';
import { StyleSheet, Text, View } from 'react-native';
import Canvas from 'react-native-canvas';
import { WebView } from 'react-native-webview';

export default function App() {
  handleCanvas = (canvas) => {
    const ctx = canvas.getContext('2d');
    ctx.fillStyle = 'purple';
    ctx.fillRect(0, 0, 100, 100);
  }

  pressCanvas = () => {
    console.log("Pressed");
  }

  return (
    <View style={styles.container}>
      <Text>Open up App.js to start working on your app!</Text>
      <Canvas ref={this.handleCanvas} />
      <WebView source={{ uri: 'https://facebook.github.io/react-native/' }} />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
