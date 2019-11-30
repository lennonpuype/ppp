using UnityEngine;

public class Player:MonoBehaviour
{
    public string name;
    public int score;
    public string rights;
    public string type;

    public Player(string aName, int aScore, string aRights, string aType)
    {
        name = aName;
        score = aScore;
        rights = aRights;
        type = aType;
    }
}