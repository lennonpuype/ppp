import 'package:flutter/material.dart';

class Images extends StatelessWidget {
  /*Nodig om te binden met de onderstaander images in de constructor*/
  final List<String> images;

  /*Constructor*/
  Images(this.images) {
    print('[Images Widget] Constructor');
  }

  @override
  Widget build(BuildContext context) {
    print('[Images Widget] Constructor');
    return Column(
      children: images
          .map(
            (element) => Card(
              child: Column(
                children: <Widget>[
                  //Image.asset('assets/img/me.jpg'),
                  Text(element)
                ],
              ),
            ),
          )
          .toList(),
    );
  }
}
