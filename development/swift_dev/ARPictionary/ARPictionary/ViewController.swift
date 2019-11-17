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
    
    @IBAction func Button(_ sender: Any) {
        print("Plus Pressed");
        addBox();
    }
    
    @IBAction func MinButton(_ sender: Any) {
        print("Min Pressed");
        removeAllBoxes();
    }
    
    let configuration = ARWorldTrackingConfiguration()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        configuration.planeDetection = .horizontal
        //configuration.planeDetection = .vertical
        makeARView();
        arView.delegate = self
    }
    
    func makeARView() {
        arView.session.run(configuration, options: [])
        
        //Debugoptions
        arView.debugOptions = [ARSCNDebugOptions.showFeaturePoints, ARSCNDebugOptions.showWorldOrigin]
        
        //Will create ambient light in scene for shadows etc
        arView.autoenablesDefaultLighting = true;
        
    }
    
    func addBox(){
        let boxNode = SCNNode()
        //boxNode.geometry = SCNBox(width: 0.05, height: 0.05, length: 0.05, chamferRadius: 0.002)
        boxNode.geometry = SCNSphere(radius: 0.05)
        boxNode.geometry?.firstMaterial?.diffuse.contents = UIImageView(image: #imageLiteral(resourceName: "Material"))
        boxNode.position = SCNVector3(Float.random(-0.5, max: 0.5) , Float.random(-0.5, max: 0.5), Float.random(-0.5, max: 0.5))//x,y,z
        
        boxNode.name = "box";
        //Add to the scene
        arView.scene.rootNode.addChildNode(boxNode);
    }
    
    func removeAllBoxes(){
        arView.scene.rootNode.enumerateChildNodes{(node, _) in
            if (node.name == "box"){
                node.removeFromParentNode()
            }
        }
    }
    
    override var prefersStatusBarHidden: Bool{
        return true
    }
    
    func renderer(_ renderer: SCNSceneRenderer, didAdd node: SCNNode, for anchor: ARAnchor) {
        guard let anchorPlane = anchor as? ARPlaneAnchor else {return}
        print("New Plane Anchor found with extent: ", anchorPlane.extent)
    }
    
    func renderer(_ renderer: SCNSceneRenderer, didUpdate node: SCNNode, for anchor: ARAnchor) {
        guard let anchorPlane = anchor as? ARPlaneAnchor else {return}
        print("Plane Anchor updatet with extent: ", anchorPlane.extent)
    }
    
    func renderer(_ renderer: SCNSceneRenderer, didRemove node: SCNNode, for anchor: ARAnchor) {
        guard let anchorPlane = anchor as? ARPlaneAnchor else {return}
        print("Plane Anchor removed with extent: ", anchorPlane.extent)
    }


}

