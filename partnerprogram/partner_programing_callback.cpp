//file: partner_programing_callback.cpp
//Purpose: Callback for partner programing
#include <cstdlib>
#include <string>
#include "partner_programing_callback.h"

using namespace std;
string out="";
void partner_programing_callback(Fl_Button *btn){
       //write to output
    out += btn->label();
    output_number->value(out.c_str());
}
void partner_programing_callback_call(Fl_Button btn_call){
    output_number->value("Calling...");
}
void partner_programing_callback_clear(Fl_Button btn_clear){
    output_number->value("");
    out="";
}
