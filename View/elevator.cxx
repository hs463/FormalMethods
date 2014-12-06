// generated by Fast Light User Interface Designer (fluid) version 1.0303

#include "elevator.h"

using namespace std;

int NUMLIFTS = 3;
int NUMFLOORS = 5;
int temp1[] = {4, 0,1};
vector<int> LIFTPASSENGERS(temp1, temp1+3);
int temp2[] = {0, 0, 3};
vector<int> LIFTSTARTFLOOR(temp2, temp2+3);
int temp3[] = {0, 1, -1};
vector<int> LIFTSTARTDIR(temp3, temp3+3);
int temp4[] = {3, 0, 0, 2, 1};
vector<int> FLOORPASSENGERS(temp4, temp4+5);
bool temp5[] = {false, false, false, true, false};
bool temp6[] = {true, true, false, false, false};
bool temp7[] = {false, true, false, false, false};
vector<bool> t5(temp5, temp5+5);
vector<bool> t6(temp6, temp6+5);
vector<bool> t7(temp7, temp7+5);
vector<bool> temp8[] = {t5, t6, t7};
vector< vector<bool> > LIFTBUTTONS(temp8, temp8+3);
bool temp9[] = {1};
bool temp10[] = {0, 0};
bool temp11[] = {0, 0};
bool temp12[] = {1, 1};
bool temp13[] = {1};
vector<bool> t9(temp9, temp9+1);
vector<bool> t10(temp10, temp10+2);
vector<bool> t11(temp11, temp11+2);
vector<bool> t12(temp12, temp12+2);
vector<bool> t13(temp13, temp13+1);
vector<bool> temp14[] = {t9, t10, t11, t12, t13};
vector< vector<bool> > FLOORBUTTONS(temp14, temp14+5);

vector<Lift> lifts;
vector<Floor> floors;
int main() {
    for(int i = 0; i < lifts.size() - 1; i++) {
        vector<bool> test (5);
        Lift l(LIFTSTARTFLOOR[i], LIFTPASSENGERS[i], LIFTSTARTDIR[i], LIFTBUTTONS[i]);
        lifts.push_back(l);
    }
    for(int i = 0; i < floors.size() - 1; i++) {
        Floor f(FLOORPASSENGERS[i], FLOORBUTTONS[i]);
        floors.push_back(f);
    }
    make_window();
    Fl::run();
    return 0;
}
    
    Fl_Window* make_window() {
        vector<Fl_Value_Slider*> sliders(NUMLIFTS);
        Fl_Window* w;
            { Fl_Window* o = new Fl_Window(350 + NUMLIFTS * 140, 704, "Lift");
                w = o;
                int x = 345;
                string name = "lift1";
                int value = 5;
                int max = NUMFLOORS;
                for(int i = 0; i < NUMLIFTS; i++) {
                    //string name = "Lift".append(i);
                    { Fl_Value_Slider* o = new Fl_Value_Slider(x, 75, 20, 525, "Lift");
                        sliders[i] = o;
                        switch(1) {
                            case(-1):
                                sliders[i]->color(FL_CYAN);
                                break;
                            case(1):
                                sliders[i]->color((Fl_Color)213);
                                break;
                            default:
                                break;
                        }
                        sliders[i]->minimum(max);
                        sliders[i]->step(1);
                        sliders[i]->value(value);
                        sliders[i]->slider_size(0.1);
                        sliders[i]->align(Fl_Align(33));
                    } // Fl_Value_Slider* o
                    x+= 125;
                }
        { Fl_Box* o = new Fl_Box(145, 100, 150, 510, "Passengers");
          o->box(FL_EMBOSSED_BOX);
          o->align(Fl_Align(FL_ALIGN_TOP));
        } // Fl_Box* o
                int y = 112;
                for(int i = 0; i < NUMFLOORS; i++) {
                    { Fl_Output* o = new Fl_Output(185, y, 25, 25, "Floor");
                        o->labelsize(12);
                        o->textsize(12);
                        o->value("6");
                    } // Fl_Output* o
                    y+= 50;
                }
                y = 155;
                for(int i = 0; i < NUMFLOORS - 1; i++) {
                    { Fl_Round_Button* o = new Fl_Round_Button(215, y, 60, 25, "Up");
                        o->down_box(FL_ROUND_DOWN_BOX);
                        o->value(1);
                        o->color((Fl_Color)1);
                        o->labelsize(12);
                    } // Fl_Round_Button* o
                    y += 50;
                }
                y = 120;
                for(int i = 1; i < NUMFLOORS; i++) {
                    { Fl_Round_Button* o = new Fl_Round_Button(215, y, 60, 25, "Down");
                        o->down_box(FL_ROUND_DOWN_BOX);
                        o->value(1);
                        o->color((Fl_Color)4);
                        o->labelsize(12);
                    } // Fl_Round_Button* o
                    y+= 50;
                }
                x = 370;
                for(int i = 0; i < NUMLIFTS; i++) {
                    y = 150;
                    for(int i = 0; i < NUMFLOORS; i++) {
                        { Fl_Round_Button* o = new Fl_Round_Button(x, y, 35, 15, "1");
                            o->down_box(FL_ROUND_DOWN_BOX);
                        } // Fl_Round_Button* o
                        y+= 20;
                    }
                    x+= 125;
                }
                x = 435;
                value = 5;
                for(int i = 0; i < NUMLIFTS; i++) {
                    { Fl_Value_Output* o = new Fl_Value_Output(x, 100, 33, 24, "Passengers");
                        o->labelsize(12);
                        o->value(value);
                    } // Fl_Value_Output* o
                    x += 125;
                }
                { new Fl_Button(25, 25, 63, 20, "Load File");
                } // Fl_Button* o
                { new Fl_Button(25, 125, 110, 20, "Start Simulation");
                } // Fl_Button* o
                { new Fl_Button(25, 225, 110, 20, "Stop Simulation");
                } // Fl_Button* o
                { new Fl_Button(25, 325, 100, 20, "Step Forward");
                } // Fl_Button* o
                { new Fl_Button(25, 425, 110, 20, "Step Backward");
                } // Fl_Button* o
                
        o->end();
      } // Fl_Window* o
        w->show();
      return w;
    }

//ref class Receiver {
//public:
//    void Handler(String^ s) {
//        Console::WriteLine(s);
//    }
//};
