import React, { Component } from 'react';
import { StyleSheet, Text, View } from 'react-native';
import { WebView } from 'react-native-webview';
import { hidden } from 'ansi-colors';

class App extends Component {

  render() {
    return (
      <>
        <View style={styles.content}>
          <Text>Show webview</Text>
        </View>
        <View style={styles.webview}>
          <WebView source={{ uri: 'http://192.168.1.5:3000/' }} scrollEnabled={false} scalesPageToFit={true} />
        </View>
      </>
    );
  }
}

const styles = StyleSheet.create({
  text: {
    fontWeight: "bold",
    fontSize: 30
  },
  webview: {
    flex: 1,
    flexDirection: 'column'
  }
})

export default App
