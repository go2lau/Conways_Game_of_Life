#include "suite.h"

Suite::Suite(){
    spaces={};
    type="";

}
Suite::Suite(string spaces_[], string type_, int num_spaces){
    for (int i=0; i<num_spaces; i++){
        spaces[i]=spaces_[i];
    }
    type= type_;

}

vector<string> Suite::get_suite_info(){
    return features;
    return spaces;
}

string Suite::get_suite_type(){

    return type;
}
