#include <iostream>
 
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
            
            abort;
            
        }
        
    }
    
};
class Iam : public Hum
{
    bool IsIntelectum; 
};

int main()
{
    bool IsLiv = true;
    bool IsWal= true;
    bool IsFl = true;
    Hum Man(IsLiv, IsWal, IsFl);

}