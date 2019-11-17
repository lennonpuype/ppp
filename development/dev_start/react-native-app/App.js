import React, { Component } from 'react';
import { StyleSheet, Text, View } from 'react-native';
import { WebView } from 'react-native-webview';
import { hidden } from 'ansi-colors';

class App extends Component {

  constructor() {
    super();
    this.state = {
      user: ``
    };
  }

  render() {
    const { user } = this.state;

    // if (user === ``) {
    //   return (
    //     <div className="link" >
    //       <button onClick={this.handleClickBtn} id="host">Host Game</button>
    //       <button onClick={this.handleClickBtn} id="join">Join Game</button>
    //     </div>
    //   )
    // } else {
    //   if (user === `host`) {
    //     console.log("Hosting the game");

    //     return <DrawingCanvas />
    //   }

    //   if (user === `join`) {
    //     console.log("Joining the game");
    //     return <StillCanvas />
    //   }
    // }
    return (
      <>
        <View style={styles.content}>
          <Text>Show webview</Text>
        </View>
        <View style={styles.webview}>
          <WebView source={{ uri: 'https://safe-savannah-88111.herokuapp.com' }} scrollEnabled={false} scalesPageToFit={true} />
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
