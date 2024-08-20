#include "Creature.hpp"
#include <string>
#include<cstring>
using namespace std;

  
 /**
      Default constructor.
      Default-initializes all private members. 
      Default creature name: "NAMELESS". 
      Booleans are default-initialized to False. 
      Default enum value: UNKNOWN 
      Default Hitpoints and Level: 1.
   */
  Creature::Creature()
  {
    name_ = "NAMELESS";
    is_tame = false;
    category_ = UNKOWN;
    level_ = 1;
    hit_points_ = 1;
  };
  Creature::Creature(string& init_name, bool init_tame, Category init_category,  int init_level, int init_hitpoints)
  {
    name_ = init_name;
    is_tame = init_tame;
    category_ = init_category;
    level_ = init_level;
    hit_points_ = init_hitpoints;
  };

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
    //ASCII values of lowercase characters  97 - 122
    //ASCII values of UpperCase values  65-90 


    //if lower case assign name to UPPERCASE 
    string emptyStr = "";
    bool output = false;

    for(int i = 0; i < init_name.length(); i++)
    {
      //if any character containts ONLY lowercase and Upper Case letter 
      if(  (int)init_name[i]>= 97 && (int)init_name[i] <= 122 
        || ( (int)init_name[i] >= 65 && (int)init_name[i]<= 90 ) )
      {
        emptyStr +=toupper(init_name[i]);
        name_ = emptyStr;
        output = true;  
      }
      else
        output = false;
    }
    return output;
  

    
  }


  /**
    @return : the name of the Creature
  */
  string  Creature::getName()
  {
    return name_;
  }


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
  string  Creature::getCategory()
  {
    string strCategory = to_string(category_);
    return strCategory;
  }

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

    
