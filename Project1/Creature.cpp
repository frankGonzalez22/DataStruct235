#include "Creature.hpp"
#include <string>
using namespace std;
/**
    @param : the name of the Creature, a reference to string
    @post  : sets the Creature's name to the value of the parameter in UPPERCASE. 
             (convert any lowercase character to uppercase)
             Only alphabetical characters are allowed. 
           : If the input contains non-alphabetic characters, do nothing.
    @return : true if the name was set, false otherwise
    */


    bool Creature::setName(string& init_name)
    {

    }


    /**
      @return : the name of the Creature
    */
    string getName();


    /**
      @param  : a reference to Category, the category of the Creature (an enum)
      @post   : sets the Creature's category to the value of the parameter
              : If the given category was invalid, set category_ to UNKNOWN.
    */
    void Creature::setCategory(Category& init_category)
    {

    }

    /**
      @return : the category of the Creature (in string form)
     */
    string getCategory();
  
    /**
    @param  : a reference to integer that represents the creature's hitpoints
    @pre    : hitpoints >= 0 : Characters cannot have negative hitpoints 
            (do nothing for invalid input)
    @post   : sets the hitpoints private member to the value of the parameter
    @return : true if the hitpoints were set, false otherwise
    */
    bool setHitpoints(int& init_hitpoints);
    
    

    /**
         @return : the value stored in hitpoints_
    */
    int getHitpoints();
    
    

    /**
        @param  : a reference to integer level
        @pre    : level >= 0 : Characters cannot have a negative level
        @post   : sets the level private member to the value of the parameter 
                (do nothing for invalid input)
        @return : true if the level was set, false otherwise
    */
    bool setLevel(int& intit_level);



    /**
         @return : the value stored in level_
    */
    int getLevel();
    
    

    /**
         @param  : a reference to boolean value
        @post   : sets the tame flag to the value of the parameter
    */
    void setTame(bool& innit_tame);



    /**
        @return true if the creature is tame, false otherwise
        Note: this is an accessor function and must follow the same convention as all accessor functions even if it is not called getTame
    */
    bool isTame();
    
    

    /**
        @post     : displays Creature data in the form:
                "[NAME]\n
                Category: [CATEGORY]\n
                Level: [LEVEL]\n
                Hitpoints: [Hitpoints]\n
                Tame: [TRUE/FALSE]"   
    */
    void display();   

    
