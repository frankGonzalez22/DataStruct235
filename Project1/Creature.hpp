#ifndef Creature_hpp 
#define Creature_hpp
#include <string>
using namespace std;
class Creature
{
private:
    enum Category {UNKOWN, UNDEAD, MYSTICAL, ALIEN};


    string name_;
    Category category_;
    int hit_points_;
    int level_;
    bool is_tame;
    
   
public:
    /**
      Default constructor.
      Default-initializes all private members. 
      Default creature name: "NAMELESS". 
      Booleans are default-initialized to False. 
      Default enum value: UNKNOWN 
      Default Hitpoints and Level: 1.
    */
    Creature();


    /**
    Parameterized constructor.
      @param      : A reference to the name of the creature (a string). Set the creature's name to NAMELESS if the provided string contains non-alphabetic characters.
      @param      : The category of the creature (a Category enum) with default value UNKNOWN
      @param      : The creature's hitpoints (an integer) , with default value 1 if not provided, or if the value provided is 0 or negative
      @param      : The creature's level (an integer), with default value 1 if not provided, or if the value provided is 0 or negative
      @param      : A flag indicating whether the creature is tame, with default value False
      @post       : The private members are set to the values of the corresponding parameters. The name is converted to UPPERCASE if it consists of alphabetical characters only, otherwise it is set to NAMELESS.
    */


Creature(string& init_name, bool init_tame, Category init_category,  int init_level, int init_hitpoints);

    /**
    @param : the name of the Creature, a reference to string
    @post  : sets the Creature's name to the value of the parameter in UPPERCASE. 
             (convert any lowercase character to uppercase)
             Only alphabetical characters are allowed. 
           : If the input contains non-alphabetic characters, do nothing.
    @return : true if the name was set, false otherwise
    */


    bool setName(string& init_name);


    /**
      @return : the name of the Creature
    */
    string getName();


    /**
      @param  : a reference to Category, the category of the Creature (an enum)
      @post   : sets the Creature's category to the value of the parameter
              : If the given category was invalid, set category_ to UNKNOWN.
    */
    void setCategory(Category& init_category);

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

    
};




#endif