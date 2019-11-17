import 'package:flutter/material.dart';
import './image_manager.dart';

void main() => runApp(MyApp());
/*Lange versie*/
// void main() {
//   runApp(MyApp());
// }

/*Connectie maken tussen build en MyApp van hierboven*/
class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text('Test'),
        ),
        body: ImageManager('Image'),
      ),
    );
  }
}

/*Scaffold is om een pagina te maken*/
/*appBar is om een een titelbar bovenaan de app te maken*/
/*body bevat alle content van een pagina*/
