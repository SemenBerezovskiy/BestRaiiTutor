#include <iostream>
#include "AnimalsNPH.h"
 


void CheckNameSpace()
{
    bool a = true;
    bool b = true;
    bool c = true;
    Animal::Pinguin.object (a, b, c);
}
class Hum
{
    public:

    bool IsLive;
    bool IsWalk;
    bool IsFly;

    Hum(bool L, bool W, bool F)
    {
        if(L == true && F == false && W == true )
        {
            IsFly = F;
            IsWalk = W;
            IsLive = L;
        }
        else
        {
            CheckNameSpace();
        }
        
    }
    
};
class Iam : public Hum
{
    bool IsIntelectum; 
};

int main()
{
    bool IsLiv;
    bool IsWal;
    bool IsFl;


    std::cout << "Insert a arg. to class Hum\n";
    std::cin >> IsFl;

    std::cout << "\nInsert a arg. to class Hum\n";
    std::cin >> IsLiv;

    std::cout << "\nInsert a arg. to class Hum\n";
    std::cin >> IsWal;

    Hum Man(IsLiv, IsWal, IsFl);


    
}