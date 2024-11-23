#include "suite.h"
// Default constructor: Initializes suite attributes to default values
Suite::Suite(){
    spaces="";
    type="";

}

// Constructor with parameters: Initializes room attributes with provided values
Suite::Suite(bool isAvailable_, string type_, string features_, float price_, int number_, string spaces_, string suite_type_){
    isAvailable=isAvailable_;
    type=type_;
    features=features_;
    price=price_;
    number=number_;
    spaces=spaces_;
    suite_type=suite_type_;
     


}


string Suite::get_suite_type(){

    return type;
}

string Suite::get_spaces(){

    return spaces;
}



