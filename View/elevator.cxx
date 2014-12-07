// generated by Fast Light User Interface Designer (fluid) version 1.0303

#include "elevator.h"
#include <iostream>

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
bool temp5[] = {0, 0, 0, 1, 0};
bool temp6[] = {1, 1, 0, 0, 0};
bool temp7[] = {0, 1, 0, 0, 0};
vector<bool> t5(temp5, temp5+5);
vector<bool> t6(temp6, temp6+5);
vector<bool> t7(temp7, temp7+5);
vector<bool> temp8[] = {t5, t6, t7};
vector< vector<bool> > LIFTBUTTONS(temp8, temp8+3);
bool temp9[] = {1, 0};
bool temp10[] = {0, 0};
bool temp11[] = {0, 0};
bool temp12[] = {1, 1};
bool temp13[] = {0, 1};
vector<bool> t9(temp9, temp9+1);
vector<bool> t10(temp10, temp10+2);
vector<bool> t11(temp11, temp11+2);
vector<bool> t12(temp12, temp12+2);
vector<bool> t13(temp13, temp13+2);
vector<bool> temp14[] = {t9, t10, t11, t12, t13};
vector< vector<bool> > FLOORBUTTONS(temp14, temp14+5);

vector<Lift> lifts;
vector<Floor> floors;
int main() {
    for(int i = 0; i < NUMLIFTS; i++) {
        Lift l(LIFTSTARTFLOOR[i], LIFTPASSENGERS[i], LIFTSTARTDIR[i], LIFTBUTTONS[i]);
        lifts.push_back(l);
    }
    for(int i = 0; i < NUMFLOORS; i++) {
        Floor f(FLOORPASSENGERS[i], FLOORBUTTONS[i]);
        floors.push_back(f);
    }
    make_window();
    Fl::run();
    return 0;
}

vector<Fl_Value_Slider*> sliders(NUMLIFTS);
vector<Fl_Value_Output*> passengersPerFloor(NUMFLOORS);
vector<Fl_Round_Button*> upButtons(NUMFLOORS - 1);
vector<Fl_Round_Button*> downButtons(NUMFLOORS - 1);
vector<Fl_Round_Button*> floorButtons(NUMFLOORS * NUMLIFTS);
vector<Fl_Value_Output*> passengersPerLift(NUMLIFTS);



//FLTK WINDOW
    Fl_Window* make_window() {
        Fl_Window* w;
            { Fl_Window* o = new Fl_Window(350 + NUMLIFTS * 140, 704, "Lift");
                w = o;
                o->color((Fl_Color)55);
                
                //SLIDERS
                int x = 345;
                for(int i = 0; i < NUMLIFTS; i++) {
                    { Fl_Value_Slider* o = new Fl_Value_Slider(x, 75, 20, 525, "Lift");
                        sliders[i] = o;
                        switch(lifts[i].getDir()) {
                            case(-1):
                                sliders[i]->color(FL_CYAN);
                                break;
                            case(1):
                                sliders[i]->color((Fl_Color)213);
                                break;
                            default:
                                break;
                        }
                        sliders[i]->minimum(NUMFLOORS);
                        sliders[i]->maximum(0);
                        sliders[i]->step(1);
                        sliders[i]->value(lifts[i].getCurFLoor());
                        sliders[i]->slider_size(0.1);
                        sliders[i]->align(Fl_Align(33));
                        o->deactivate();
                    } // Fl_Value_Slider* sliders[]
                    x+= 125;
                }
                
                //INFORMATION BOX
                { Fl_Box* o = new Fl_Box(145, 100, 150, 510, "Floor Information");
                    o->box(FL_EMBOSSED_BOX);
                    o->color((Fl_Color)55);
                    o->align(Fl_Align(FL_ALIGN_TOP));
                } // Fl_Box* o
                
                //PASSENGERS PER FLOOR
                int y = 112;
                for(int i = 0; i < NUMFLOORS; i++) {
                    {   passengersPerFloor[i] = new Fl_Value_Output(185, y, 25, 25, "Floor");
                        passengersPerFloor[i]->labelsize(12);
                        passengersPerFloor[i]->textsize(12);
                        passengersPerFloor[i]->value(floors[i].getNumPass());
                    } // Fl_Value_Output* passengersPerFloor[]
                    y+= 50;
                }
                
                //UP BUTTONS
                y = 155;
                for(int i = NUMFLOORS - 2; i >= 0; i--) {
                    {   upButtons[i] = new Fl_Round_Button(215, y, 60, 25, "Up");
                        upButtons[i]->down_box(FL_ROUND_DOWN_BOX);
                        upButtons[i]->value(floors[i].getButtons()[0]);
                        upButtons[i]->labelsize(12);
                        upButtons[i]->deactivate();
                    } // Fl_Round_Button* upButtons[]
                    y += 50;
                }
                
                //DOWN BUTTONS
                y = 120;
                for(int i = NUMFLOORS - 1; i >= 1 ; i--) {
                    {   downButtons[i - 1] = new Fl_Round_Button(215, y, 60, 25, "Down");
                        downButtons[i - 1]->down_box(FL_ROUND_DOWN_BOX);
                        downButtons[i - 1]->value(floors[i].getButtons()[1]);
                        downButtons[i - 1]->labelsize(12);
                        downButtons[i - 1]->deactivate();
                    } // Fl_Round_Button* downButtons[]
                    y+= 50;
                }
                
                //FLOOR BUTTONS
                vector<char*> names;
                x = 370;
                for(int i = 0; i < NUMLIFTS; i++) {
                    y = 150;
                    
                    //PROBLEM: Don't know how to fix, need to create an array of the char*'s
                    for(int j = 0; j < NUMFLOORS; j++) {
                        int k = j+1;
                        char* name = (char*)malloc(sizeof(char));
                        sprintf(name, "%d", k);
                        names.push_back(name);
                        //cout << "name: " << names[j] << "\n";
                        {   floorButtons[i*j] = new Fl_Round_Button(x, y, 35, 15, names[j]);
                            floorButtons[i*j]->down_box(FL_ROUND_DOWN_BOX);
                            floorButtons[i*j]->value(lifts[i].getButtons()[j]);
                            floorButtons[i*j]->deactivate();
                        } // Fl_Round_Button* floorButtons[]
                        y+= 20;
                    }
                    x+= 125;
                }
                
                //PASSENGERS PER LIFT
                x = 435;
                for(int i = 0; i < NUMLIFTS; i++) {
                    { Fl_Value_Output* o = new Fl_Value_Output(x, 100, 33, 24, "Passengers");
                        passengersPerLift[i] = o;
                        passengersPerLift[i]->labelsize(12);
                        passengersPerLift[i]->value(lifts[i].getNumPass());
                    } // Fl_Value_Output* passengersPerLift[]
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

Floor :: Floor(int passengers, vector<bool> btns) {
    numPassengers = passengers;
    buttons = btns;
}

int Floor :: getNumPass() {
    return numPassengers;
}

vector<bool> Floor :: getButtons() {
    return buttons;
}

void Floor :: setNumPass(int passengers) {
    numPassengers = passengers;
}

void Floor :: setButtons(vector<bool> btns) {
    buttons = btns;
}

Lift :: Lift(int floor, int passengers, int dir, vector<bool> btns) {
    currentFloor = floor;
    numPassengers = passengers;
    direction = dir;
    buttons = btns;
}

int Lift :: getCurFLoor() {
    return currentFloor;
}
int Lift :: getNumPass() {
    return numPassengers;
}

int Lift :: getDir() {
    return  direction;
}

vector<bool> Lift :: getButtons() {
    return buttons;
}

void Lift :: setCurFloor(int floor) {
    currentFloor = floor;
}

void Lift :: setNumPass(int passengers) {
    numPassengers = passengers;
}

void Lift :: setDir(int dir) {
    direction = dir;
}

void Lift :: setButtons(vector<bool> btns) {
    buttons = btns;
}
