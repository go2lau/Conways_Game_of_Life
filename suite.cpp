#include "suite.h"

Suite::Suite(){
    spaces="";
    type="";

}
Suite::Suite(string spaces_, string type_){
    spaces=spaces_;
    type=type_;

}

string Suite::get_suite_info(){
    string info= "Spaces: "+spaces+"\nType: "+type;
    return info;
}

string Suite::get_suite_type(){

    return type;
}

string Suite::get_spaces(){

    return spaces;
}
