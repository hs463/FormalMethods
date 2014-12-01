// generated by Fast Light User Interface Designer (fluid) version 1.0303

#include "elevator.h"

int main() {
    make_window();
    Fl::run();
    return 0;
}

Fl_Window* make_window() {
  Fl_Window* w;
  { Fl_Window* o = new Fl_Window(732, 629);
    w = o;
    { Fl_Value_Slider* o = new Fl_Value_Slider(345, 35, 20, 525, "Lift1");
      o->color(FL_CYAN);
      o->minimum(10);
      o->step(1);
      o->value(5);
      o->slider_size(0.1);
      o->align(Fl_Align(33));
    } // Fl_Value_Slider* o
    { Fl_Value_Slider* o = new Fl_Value_Slider(395, 35, 20, 525, "Lift2");
      o->color((Fl_Color)213);
      o->minimum(10);
      o->step(1);
      o->value(1);
      o->slider_size(0.1);
      o->align(Fl_Align(33));
    } // Fl_Value_Slider* o
    { Fl_Value_Slider* o = new Fl_Value_Slider(445, 35, 20, 525, "Lift3");
      o->color(FL_CYAN);
      o->minimum(10);
      o->step(1);
      o->value(9);
      o->slider_size(0.1);
      o->align(Fl_Align(33));
    } // Fl_Value_Slider* o
    { Fl_Value_Slider* o = new Fl_Value_Slider(495, 35, 20, 525, "Lift4");
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
    { Fl_Scrollbar* o = new Fl_Scrollbar(708, 0, 25, 604);
      o->align(Fl_Align(FL_ALIGN_RIGHT));
      Fl_Group::current()->resizable(o);
    } // Fl_Scrollbar* o
    { Fl_Scrollbar* o = new Fl_Scrollbar(0, 605, 707, 25);
      o->type(1);
      o->align(Fl_Align(FL_ALIGN_BOTTOM_LEFT));
    } // Fl_Scrollbar* o
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
    o->end();
  } // Fl_Window* o
    w->show();
  return w;
}
