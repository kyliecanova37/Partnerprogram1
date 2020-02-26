//File: main.cpp
//Purpose: This application creates a phone dialer
#include "partner_programing.h"
#include "partner_programing_callback.h"

int main(int argc, char **argv)
{
    Fl_Double_Window *window =make_phone();

    //show the window
    window->show(argc, argv);

    //set up the callback functions
    btn_1->callback((Fl_Callback*) partner_programing_callback);     
    btn_2->callback((Fl_Callback*) partner_programing_callback);
    btn_3->callback((Fl_Callback*) partner_programing_callback);
    btn_4->callback((Fl_Callback*) partner_programing_callback);
    btn_5->callback((Fl_Callback*) partner_programing_callback);
    btn_6->callback((Fl_Callback*) partner_programing_callback);
    btn_7->callback((Fl_Callback*) partner_programing_callback);
    btn_8->callback((Fl_Callback*) partner_programing_callback);
    btn_9->callback((Fl_Callback*) partner_programing_callback);
    btn_0->callback((Fl_Callback*) partner_programing_callback); 
    btn_call->callback((Fl_Callback*) partner_programing_callback_call);
    btn_clear->callback((Fl_Callback*) partner_programing_callback_clear);
    btn_star->callback((Fl_Callback*) partner_programing_callback);
    btn_pound->callback((Fl_Callback*) partner_programing_callback);

    //enter our event loop
    return Fl::run();
}