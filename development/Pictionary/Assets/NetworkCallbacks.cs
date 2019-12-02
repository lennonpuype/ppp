using UnityEngine;

[BoltGlobalBehaviour]
public class NetworkCallbacks : Bolt.GlobalEventListener
{
    public override void SceneLoadLocalDone(string scene)
    {
        BoltNetwork.Instantiate(BoltPrefabs.Canvas);
        BoltNetwork.Instantiate(BoltPrefabs.GameFlow);
    }

    //public override void Connected(BoltConnection connection)
    //{
    //    BoltLog.Info("Accept Token {0} using Connect Token {1}", connection.AcceptToken, connection.ConnectToken);

    //    var player = BoltNetwork.Instantiate(BoltPrefabs.Player);

    //    player.AssignControl(connection);
    //    player.IsOwner = true;
    //}
}
