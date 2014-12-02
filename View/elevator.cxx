// generated by Fast Light User Interface Designer (fluid) version 1.0303

#include "elevator.h"

int main() {
    make_window();
    Fl::run();
    return 0;
}

Fl_Window* make_window() {
  Fl_Window* w;
  { Fl_Window* o = new Fl_Window(931, 704, "Lift");
    w = o;
      { Fl_Value_Slider* o = new Fl_Value_Slider(345, 35, 20, 525, "Lift1");
          o->color(FL_CYAN);
          o->minimum(10);
          o->step(1);
          o->value(5);
          o->slider_size(0.1);
          o->align(Fl_Align(33));
      } // Fl_Value_Slider* o
      { Fl_Value_Slider* o = new Fl_Value_Slider(470, 35, 20, 525, "Lift2");
          o->color((Fl_Color)213);
          o->minimum(10);
          o->step(1);
          o->value(1);
          o->slider_size(0.1);
          o->align(Fl_Align(33));
      } // Fl_Value_Slider* o
      { Fl_Value_Slider* o = new Fl_Value_Slider(605, 35, 20, 525, "Lift3");
          o->color(FL_CYAN);
          o->minimum(10);
          o->step(1);
          o->value(9);
          o->slider_size(0.1);
          o->align(Fl_Align(33));
      } // Fl_Value_Slider* o
      { Fl_Value_Slider* o = new Fl_Value_Slider(735, 40, 20, 525, "Lift4");
          o->color((Fl_Color)213);
          o->minimum(10);
          o->step(1);
          o->value(2);
          o->slider_size(0.1);
          o->align(Fl_Align(33));
      } // Fl_Value_Slider* o
    { Fl_Box* o = new Fl_Box(100, 50, 185, 510, "Passengers");
      o->box(FL_EMBOSSED_BOX);
      o->align(Fl_Align(FL_ALIGN_TOP));
    } // Fl_Box* o
    { Fl_Output* o = new Fl_Output(185, 520, 25, 25, "1st Floor");
      o->labelsize(12);
      o->textsize(12);
      o->value("7");
    } // Fl_Output* o
    { Fl_Output* o = new Fl_Output(185, 471, 25, 25, "2nd Floor");
      o->labelsize(12);
      o->textsize(12);
      o->value("2");
    } // Fl_Output* o
    { Fl_Output* o = new Fl_Output(185, 421, 25, 25, "3rd Floor");
      o->labelsize(12);
      o->textsize(12);
      o->value("0");
    } // Fl_Output* o
    { Fl_Output* o = new Fl_Output(185, 372, 25, 25, "4th Floor");
      o->labelsize(12);
      o->textsize(12);
      o->value("1");
    } // Fl_Output* o
    { Fl_Output* o = new Fl_Output(185, 322, 25, 25, "5th Floor");
      o->labelsize(12);
      o->textsize(12);
      o->value("0");
    } // Fl_Output* o
    { Fl_Output* o = new Fl_Output(185, 272, 25, 25, "6th Floor");
      o->labelsize(12);
      o->textsize(12);
      o->value("0");
    } // Fl_Output* o
    { Fl_Output* o = new Fl_Output(185, 217, 25, 25, "7th Floor");
      o->labelsize(12);
      o->textsize(12);
      o->value("1");
    } // Fl_Output* o
    { Fl_Output* o = new Fl_Output(185, 167, 25, 25, "8th Floor");
      o->labelsize(12);
      o->textsize(12);
      o->value("0");
    } // Fl_Output* o
    { Fl_Output* o = new Fl_Output(185, 120, 25, 25, "9th Floor");
      o->labelsize(12);
      o->textsize(12);
      o->value("0");
    } // Fl_Output* o
    { Fl_Output* o = new Fl_Output(185, 70, 25, 25, "10th Floor");
      o->labelsize(12);
      o->textsize(12);
      o->value("3");
    } // Fl_Output* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 520, 60, 25, "Up");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->value(1);
      o->color((Fl_Color)1);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 485, 60, 25, "Down");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->value(1);
      o->color((Fl_Color)4);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 465, 60, 25, "Up");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->value(1);
      o->color((Fl_Color)1);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 434, 60, 25, "Down");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)4);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 414, 60, 25, "Up");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)1);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 385, 60, 25, "Down");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->value(1);
      o->color((Fl_Color)4);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 365, 60, 25, "Up");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)1);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 335, 60, 25, "Down");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)4);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 315, 60, 25, "Up");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)1);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 280, 60, 25, "Down");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)4);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 260, 60, 25, "Up");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)1);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 230, 60, 25, "Down");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)4);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 210, 60, 25, "Up");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->value(1);
      o->color((Fl_Color)1);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 180, 60, 25, "Down");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)4);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 160, 60, 25, "Up");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)1);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 131, 60, 25, "Down");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)4);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 111, 60, 25, "Up");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->color((Fl_Color)1);
      o->labelsize(12);
    } // Fl_Round_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(215, 70, 60, 25, "Down");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->value(1);
      o->color((Fl_Color)4);
      o->labelsize(12);
    } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(370, 395, 35, 15, "1");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(370, 375, 35, 15, "2");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(370, 355, 35, 15, "3");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(370, 335, 35, 15, "4");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(370, 317, 35, 15, "5");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(370, 297, 35, 15, "6");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(370, 277, 35, 15, "7");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(370, 257, 35, 15, "8");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(370, 239, 35, 15, "9");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(370, 219, 35, 15, "10");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(505, 395, 35, 15, "1");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(505, 375, 35, 15, "2");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(505, 355, 35, 15, "3");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(505, 335, 35, 15, "4");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(505, 317, 35, 15, "5");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(505, 297, 35, 15, "6");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(505, 277, 35, 15, "7");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(505, 257, 35, 15, "8");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(505, 239, 35, 15, "9");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(505, 219, 35, 15, "10");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(635, 390, 35, 15, "1");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(635, 370, 35, 15, "2");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(635, 350, 35, 15, "3");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(635, 330, 35, 15, "4");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(635, 312, 35, 15, "5");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(635, 292, 35, 15, "6");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(635, 272, 35, 15, "7");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(635, 252, 35, 15, "8");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(635, 234, 35, 15, "9");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(635, 214, 35, 15, "10");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(770, 395, 35, 15, "1");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(770, 375, 35, 15, "2");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(770, 355, 35, 15, "3");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(770, 335, 35, 15, "4");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(770, 317, 35, 15, "5");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(770, 297, 35, 15, "6");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(770, 277, 35, 15, "7");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(770, 257, 35, 15, "8");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(770, 239, 35, 15, "9");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(770, 219, 35, 15, "10");
          o->down_box(FL_ROUND_DOWN_BOX);
      } // Fl_Round_Button* o
      { Fl_Value_Output* o = new Fl_Value_Output(435, 181, 33, 24, "Passengers");
          o->labelsize(12);
          o->value(4);
      } // Fl_Value_Output* o
      { Fl_Value_Output* o = new Fl_Value_Output(565, 181, 33, 24, "Passengers");
          o->labelsize(12);
          o->value(0);
      } // Fl_Value_Output* o
      { Fl_Value_Output* o = new Fl_Value_Output(700, 181, 33, 24, "Passengers");
          o->labelsize(12);
          o->value(1);
      } // Fl_Value_Output* o
      { Fl_Value_Output* o = new Fl_Value_Output(825, 181, 33, 24, "Passengers");
          o->labelsize(12);
          o->value(10);
      } // Fl_Value_Output* o
      { new Fl_Input(160, 641, 335, 24, "File name");
      } // Fl_Input* o
      { new Fl_Button(510, 640, 63, 20, "Load File");
      } // Fl_Button* o
    o->end();
  } // Fl_Window* o
    w->show();
  return w;
}
