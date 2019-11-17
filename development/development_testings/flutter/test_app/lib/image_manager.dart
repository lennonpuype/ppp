import 'package:flutter/material.dart';
import './images.dart';

class ImageManager extends StatefulWidget {
  final String startingImage;

  ImageManager(this.startingImage);

  @override
  State<StatefulWidget> createState() {
    return _ImageManagerState();
  }
}

class _ImageManagerState extends State<ImageManager> {
  List<String> _images = [];
  //List is de vervanger van Arrays

  @override
  void initState() {
    _images.add(widget.startingImage);
    //Altijd op einde van functie oproepen
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return Column(
      children: [
        Container(
          margin: EdgeInsets.all(10.0),
          child: RaisedButton(
            onPressed: () {
              setState(() {
                _images.add('new Image');
                print(_images);
              });
            },
            child: Text('Add Image'),
          ),
        ),
        Images(_images)
      ],
    );
  }
}
