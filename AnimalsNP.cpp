#include<iostream>

namespace Animals
{
    class Animal
{
    public:

    std::string Name;
    bool IsMove;
    bool IsEat;
    
};
class Pinguin : Animal
{
    std::string species;
    bool IsBird;

    Pinguin(bool b, bool bn, bool mb)
    {
        if(IsMove == true && IsEat == true && IsEat == true)
        {
            IsBird = b;
            IsEat = bn;
            IsMove = mb;
        }
    }
};
}