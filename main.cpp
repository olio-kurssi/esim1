#include <iostream>

using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        int getAge() const {
            return age;
        }
        void setAge(int value){
            age=value;
        }
        string getName() const {
            return name;
        }
        void setName(string value){
            name=value;
        }
};
int main()
{

    //Person olion luonti dynaamiseen muistiin ja olion käyttö
    Person *objectPerson1 = new Person;
    objectPerson1->setAge(25);
    objectPerson1->setName("Liisa Joki");
    cout<<"Terve "<<objectPerson1->getName()<<" olet siis "<<objectPerson1->getAge()<<" vuotias"<<endl;
    delete objectPerson1;
    objectPerson1=nullptr;

    //Person olion luonti pinomuistiin ja olion käyttö
    Person objectPerson2;
    objectPerson2.setAge(25);
    objectPerson2.setName("Teppo Testi");
    cout<<"Terve "<<objectPerson2.getName()<<" olet siis "<<objectPerson2.getAge()<<" vuotias"<<endl;
    return 0;
}
