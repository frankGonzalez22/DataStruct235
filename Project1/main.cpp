#include <iostream>
#include<string>
#include "Creature.cpp"
using namespace std;
int main()
{
    //Creating my first Creature class
    Creature demo;
   // Creature monster("Frank", true ,  ,3 ,4);
    cout<<demo.getName()<<endl;
    cout<<demo.getCategory()<<endl;
    string new_name = "Frank";
    cout<<"Setting New Name... " <<demo.setName(new_name)<<endl;
    cout<<demo.getName()<<endl;





    
    return 0;
}



