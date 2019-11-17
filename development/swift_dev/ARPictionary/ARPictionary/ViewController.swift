//
//  ViewController.swift
//  ARPictionary
//
//  Created by Lennon Puype on 17/11/2019.
//  Copyright © 2019 Lennon Puype. All rights reserved.
//

import UIKit
import ARKit

class ViewController: UIViewController {

    @IBOutlet weak var arView: ARSCNView!
    
    @IBAction func Button(_ sender: Any) {
        print("Button Pressed");
        addBox();
    }
    
    let configuration = ARWorldTrackingConfiguration()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        makeARView();

    }
    
    func makeARView() {
        arView.session.run(configuration, options: [])
        
        //Debugoptions
        arView.debugOptions = [ARSCNDebugOptions.showFeaturePoints, ARSCNDebugOptions.showWorldOrigin]
        
        //Will create ambient light in scene for shadows etc
        arView.autoenablesDefaultLighting = true;
        
    }
    
    func addBox(){
        
        let randomX = Float.random() * (0 - 0.5) + 0;
        let randomY = Float.random() * (0 - 0.5) + 0;
        let randomZ = Float.random() * (0 - 0.5) + 0;
        
        print(randomZ)
        
        let boxNode = SCNNode()
        boxNode.geometry = SCNBox(width: 0.05, height: 0.05, length: 0.05, chamferRadius: 0.002)
        //boxNode.geometry?.firstMaterial?.diffuse.contents = UIColor.red
        boxNode.geometry?.firstMaterial?.diffuse.contents = UIImageView(image: #imageLiteral(resourceName: "Material"))
        boxNode.position = SCNVector3(randomX,randomY,randomZ)//x,y,z
        
        //Add to the scene
        arView.scene.rootNode.addChildNode(boxNode);
    }
    
    override var prefersStatusBarHidden: Bool{
        return true
    }


}

