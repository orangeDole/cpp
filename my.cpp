#include <iostream>
using namespace std;

class Hero{
    public :
  void heroAttack();
  void heroWalk(string direction);
  void heroTalk(string word);
  void showInfo();
  void showItems(string item[],int size);
  


string  heroName;
int    levelHero;
string  typeHero;
int healthPoints;
int   heroEnergy;
//// атрибути

    Hero(string name,int level,string type,int health ,int energy ){

        heroName  =      name;
        levelHero =     level;
        typeHero  =      type;
        healthPoints = health;
        heroEnergy   = energy;
/// CONSTRUCTOR
    };

  
};

void Hero::showItems(string item[],int size) {
for(int i = 0 ; i< size ; i++) {
    std::cout<<item[i]<<" "<<std::endl;
}
};

void Hero::showInfo(){
    std::cout<<"HeroName:     "<<heroName<<"."<<std::endl;
    std::cout<<"TypeHero:     "<<typeHero<<"."<<std::endl;
    std::cout<<"HeroHealth:   "<<healthPoints<<"."<<std::endl;
    std::cout<<"HeroEnergy:   "<<heroEnergy<<"."<<std::endl;
};

void Hero::heroAttack(){
    std::cout<<"attack:15."<<std::endl;
};
void Hero::heroTalk(string word){
    std::cout<<"Hero:"<<heroName<<" ->"<<"Says"<<"\t"<<word<<std::endl;
};
void Hero::heroWalk(string direction){
if (heroEnergy <= 5) {
    std::cout<<"NO energy find food"<<std::endl;
}

        heroEnergy -= 5;

    std::cout<<"Goes"<<" "<<direction<<"."<<std::endl;
    std::cout<<"energy left:"<<" "<<heroEnergy<<"."<<std::endl;
};


//// ЗОВНІШНІ ФУНКЦІІ

int heroOgre(){

    Hero ogreMagi("Ogre",5,"Magic",100,150);

    string ogresItems[5] = {"sword","gloves","ring","goldRing","map"};

    ogreMagi.showInfo();

    return 0;
};




int main(){

    heroOgre();

    return 0;
}
