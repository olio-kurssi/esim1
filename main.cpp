#include <iostream>

using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        int getAge(){
            return age;
        }
        void setAge(int value){
            age=value;
        }
        string getName(){
            return name;
        }
        void setName(string value){
            name=value;
        }
};
int main()
{
    //tietueen luominen
    typedef struct Person_struct{
        int age;
        string name;
    }
    person;

    //tietuemuuttujan luominen ja sen käyttö
    person pe;
    pe.age=23;
    pe.name="Teppo Testi";
    cout<<"Terve "<<pe.name<<" olet siis "<<pe.age<<" vuotias"<<endl;

    //Person olion luonti dynaamiseen muistiin ja olion käyttö
    Person *objectPerson = new Person;
    objectPerson->setAge(25);
    objectPerson->setName("Liisa Joki");
    cout<<"Terve "<<objectPerson->getName()<<" olet siis "<<objectPerson->getAge()<<" vuotias"<<endl;
    delete objectPerson;

    return 0;
}
