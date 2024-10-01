#include <iostream>
 
class Person 
{
public:
    std::string name;
    unsigned age;
    void print() 
    {
        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
    }
    Person(std::string p_name, unsigned p_age)
    {
        name = p_name;
        age = p_age;
        std::cout << "Person has been created" << std::endl;
    }
};
int main()
{
    Person tom("Tom", 38);  // создаем объект - вызываем конструктор
    tom.print();
}