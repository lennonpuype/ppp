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
    
    @IBAction func Button(_ sender: Any) {
        print("Plus Pressed");
        addBox();
    }
    
    @IBAction func MinButton(_ sender: Any) {
        print("Min Pressed");
        removeAllBoxes();
    }
    
    let configuration = ARWorldTrackingConfiguration()
    
    var startingPositionNode: SCNNode?
    var endingPositionNode: SCNNode?
    let cameraRelativePosition = SCNVector3(0,0,-0.1)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        configuration.planeDetection = .horizontal
        //configuration.planeDetection = .vertical
        makeARView();
        arView.delegate = self
        
        let tapGestureRecognizer = UITapGestureRecognizer(target: self, action: #selector(handleTap))
        arView.addGestureRecognizer(tapGestureRecognizer)
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
    
//    override var prefersStatusBarHidden: Bool{
//        return true
//    }
    
    func createFloor(anchor: ARPlaneAnchor) -> SCNNode{
        let floor = SCNNode()
        floor.name = "floor"
        floor.eulerAngles = SCNVector3(90.degreesToRadians,0,0)
        floor.geometry = SCNPlane(width: CGFloat(anchor.extent.x), height: CGFloat(anchor.extent.z))
        floor.geometry?.firstMaterial?.diffuse.contents = UIImageView(image: #imageLiteral(resourceName: "Material"))
        floor.geometry?.firstMaterial?.isDoubleSided = true
        floor.position = SCNVector3(anchor.center.x, anchor.center.y, anchor.center.z)
        return floor
    }
    
    func removeNode(named: String){
        arView.scene.rootNode.enumerateChildNodes{(node, _) in
            if (node.name == named){
                node.removeFromParentNode()
            }
        }
    }
    
//    func renderer(_ renderer: SCNSceneRenderer, didAdd node: SCNNode, for anchor: ARAnchor) {
//        guard let anchorPlane = anchor as? ARPlaneAnchor else {return}
//        //print("New Plane Anchor found with extent: ", anchorPlane.extent)
//        let floor = createFloor(anchor: anchorPlane)
//        node.addChildNode(floor)
//    }
//
//    func renderer(_ renderer: SCNSceneRenderer, didUpdate node: SCNNode, for anchor: ARAnchor) {
//        guard let anchorPlane = anchor as? ARPlaneAnchor else {return}
//        //print("Plane Anchor updatet with extent: ", anchorPlane.extent)
//        removeNode(named: "floor")
//        let floor = createFloor(anchor: anchorPlane)
//        node.addChildNode(floor)
//    }
//
//    func renderer(_ renderer: SCNSceneRenderer, didRemove node: SCNNode, for anchor: ARAnchor) {
//        guard let anchorPlane = anchor as? ARPlaneAnchor else {return}
//        //print("Plane Anchor removed with extent: ", anchorPlane.extent)
//        removeNode(named: "floor")
//    }
    
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

    @objc func handleTap(sender: UITapGestureRecognizer){
        if(startingPositionNode != nil && endingPositionNode != nil){
            startingPositionNode?.removeFromParentNode()
            endingPositionNode?.removeFromParentNode()
            startingPositionNode = nil
            endingPositionNode = nil
            //
        }else if (startingPositionNode != nil && endingPositionNode == nil){
            let sphere = SCNNode(geometry: SCNSphere(radius: 0.005))
            sphere.geometry?.firstMaterial?.diffuse.contents = UIColor.red
            Service.addChildNode(sphere, toNode: arView.scene.rootNode, inView: arView, cameraRelativePosition: cameraRelativePosition)
            endingPositionNode = sphere
            //
        }else if (startingPositionNode == nil && endingPositionNode == nil){
            let sphere = SCNNode(geometry: SCNSphere(radius: 0.005))
            sphere.geometry?.firstMaterial?.diffuse.contents = UIColor.purple
            Service.addChildNode(sphere, toNode: arView.scene.rootNode, inView: arView, cameraRelativePosition: cameraRelativePosition)
            startingPositionNode = sphere
            //
        }
    }
}

