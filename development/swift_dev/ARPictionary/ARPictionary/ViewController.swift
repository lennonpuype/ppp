//
//  ViewController.swift
//  ARPictionary
//
//  Created by Lennon Puype on 17/11/2019.
//  Copyright © 2019 Lennon Puype. All rights reserved.
//

import UIKit
import ARKit

class ViewController: UIViewController, ARSCNViewDelegate {

    @IBOutlet weak var arView: ARSCNView!
    
    @IBOutlet weak var distanceLabel: UILabel!
    @IBOutlet weak var xLabel: UILabel!
    @IBOutlet weak var yLabel: UILabel!
    @IBOutlet weak var zLabel: UILabel!
    
    @IBAction func Button(_ sender: UIButton) {
        print("Plus Pressed");
        //addBox();
    }
    @IBOutlet weak var buttonOutlet: UIButton!
    
    @IBAction func MinButton(_ sender: UIButton) {
        print("Min Pressed");
        //removeAllBoxes();
    }
    
    let configuration = ARWorldTrackingConfiguration()
    
    var startingPositionNode: SCNNode?
    var endingPositionNode: SCNNode?
    let cameraRelativePosition = SCNVector3(0,0,-0.1)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        configuration.planeDetection = .horizontal
        makeARView();
        arView.delegate = self
    }
    
    func makeARView() {
        arView.session.run(configuration, options: [])
        arView.autoenablesDefaultLighting = true;
        
        //Debugoptions
//        arView.debugOptions = [ARSCNDebugOptions.showFeaturePoints, ARSCNDebugOptions.showWorldOrigin]
        
        //arView.showsStatistics = true
    }
    
    func removeNode(named: String){
        arView.scene.rootNode.enumerateChildNodes{(node, _) in
            if (node.name == named){
                node.removeFromParentNode()
            }
        }
    }
    
    func renderer(_ renderer: SCNSceneRenderer, updateAtTime time: TimeInterval) {
        if(startingPositionNode != nil && endingPositionNode != nil){
            return
        }
        guard let xDistance = Service.distance3(fromStartingPositionNode: startingPositionNode, onView: arView, cameraRelativePosition: cameraRelativePosition)?.x else {return}
        guard let yDistance = Service.distance3(fromStartingPositionNode: startingPositionNode, onView: arView, cameraRelativePosition: cameraRelativePosition)?.y else {return}
        guard let zDistance = Service.distance3(fromStartingPositionNode: startingPositionNode, onView: arView, cameraRelativePosition: cameraRelativePosition)?.z else {return}
        
        DispatchQueue.main.sync {
            self.xLabel.text = String(format: "%.2f", xDistance) + "m"
            self.yLabel.text = String(format: "%.2f",yDistance) + "m"
            self.zLabel.text = String(format: "%.2f",zDistance) + "m"
            self.distanceLabel.text = String(format: "%.2f", Service.distance(x: xDistance, y: yDistance, z: zDistance)) + "m"
        }
    }
    
    func renderer(_ renderer: SCNSceneRenderer, willRenderScene scene: SCNScene, atTime time: TimeInterval) {
        DispatchQueue.main.async{
            if(self.buttonOutlet.isHighlighted){
                let sphere = SCNNode()
                sphere.geometry = SCNSphere(radius: 0.005)
                sphere.geometry?.firstMaterial?.diffuse.contents = UIColor.red
                Service.addChildNode(sphere, toNode: self.arView.scene.rootNode, inView: self.arView, cameraRelativePosition: self.cameraRelativePosition)
            }else{
                let sphere = SCNNode()
                sphere.geometry = SCNSphere(radius: 0.005)
                sphere.name = "centerPosition"
                self.removeNode(named: "centerPosition")
                sphere.geometry?.firstMaterial?.diffuse.contents = UIColor.red
                Service.addChildNode(sphere, toNode: self.arView.scene.rootNode, inView: self.arView, cameraRelativePosition: self.cameraRelativePosition)
            }
        }
        
    }
}

