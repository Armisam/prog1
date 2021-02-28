#include "Simple_window.h"
#include "Graph.h"

int main()
{
    using namespace Graph_lib;

    Simple_window win {Point{100,100}, 1280, 768,"ch12_exercises"};
    
    //exercise 1_a
    Rectangle r{Point{40,40}, 100, 51};
    r.set_color(Color::blue);
   
    //exercise 1_b
    Closed_polyline poly_rect;
    poly_rect.add(Point{140, 40});
    poly_rect.add(Point{240, 40});
    poly_rect.add(Point{240, 90});
    poly_rect.add(Point{140, 90});
    poly_rect.set_color(Color::red);

    //exercise 2
    Rectangle h{Point{300,40}, 100, 30};
    Text t{Point{320,60},"Howdy!"};
    
    //exercise 3
    Open_polyline poly_S;
    poly_S.add(Point{550, 40});
    poly_S.add(Point{470, 40});
    poly_S.add(Point{470, 115});
    poly_S.add(Point{550, 115});
    poly_S.add(Point{550, 190});
    poly_S.add(Point{470, 190});
    poly_S.set_style(Line_style(Line_style::solid,6));
    poly_S.set_color(Color::yellow);

    Open_polyline poly_C;
    poly_C.add(Point{650,40});
    poly_C.add(Point{570,40});
    poly_C.add(Point{570,190});
    poly_C.add(Point{650,190});
    poly_C.set_style(Line_style(Line_style::solid,6));
    poly_C.set_color(Color::black);

    //exercise 4
    Rectangle ti_11{Point{40,220}, 80, 80};
    Rectangle ti_12{Point{120,220}, 80, 80};
    Rectangle ti_13{Point{200,220}, 80, 80};
    
    Rectangle ti_21{Point{40,300}, 80, 80};
    Rectangle ti_22{Point{120,300}, 80, 80};
    Rectangle ti_23{Point{200,300}, 80, 80};
    
    Rectangle ti_31{Point{40,380}, 80, 80};
    Rectangle ti_32{Point{120,380}, 80, 80};
    Rectangle ti_33{Point{200,380}, 80, 80};
    ti_11.set_fill_color(Color::white);
    ti_12.set_fill_color(Color::red);
    ti_13.set_fill_color(Color::white);
    
    ti_21.set_fill_color(Color::red);
    ti_22.set_fill_color(Color::white);
    ti_23.set_fill_color(Color::red);
    
    ti_31.set_fill_color(Color::white);
    ti_32.set_fill_color(Color::red);
    ti_33.set_fill_color(Color::white);

    //exercise 5
    Rectangle frame{Point{15,15}, 907, 577}; //1360*768 alap
    frame.set_color(Color::red);
    frame.set_style(Line_style(Line_style::solid,24));

    //exercise 6
    /*Rectangle ex6{Point{100, -400}, 1500, 1000}; 
    nem dob hibat, de vagy egyaltalan nem jelenik meg vagy csak kis resze a pozicionalastol fuggoen

    Simple_window win {Point{100,100}, 1920, 1366,"ch12_exercises"};
    nem dob hibat, de csak add képes megjeleníteni amíg a képernyő elér (1360*768 laptop kijelzo)*/

    //exercise 7
    Closed_polyline poly_roof;
    poly_roof.add(Point{400, 250});
    poly_roof.add(Point{300, 325});
    poly_roof.add(Point{500, 325});
    poly_roof.set_color(Color::red);

    Closed_polyline poly_chimney;
    poly_chimney.add(Point{425, 300});
    poly_chimney.add(Point{475, 300});
    poly_chimney.add(Point{475, 200});
    poly_chimney.add(Point{425, 200});
    poly_chimney.set_color(Color::green);

    Closed_polyline poly_walls;
    poly_walls.add(Point{300, 326});
    poly_walls.add(Point{500, 326});
    poly_walls.add(Point{500, 476});
    poly_walls.add(Point{300, 476});
    poly_walls.set_color(Color::black);

    Closed_polyline poly_door;
    poly_door.add(Point{375, 475});
    poly_door.add(Point{425, 475});
    poly_door.add(Point{425, 375});
    poly_door.add(Point{375, 375});
    poly_door.set_color(Color::yellow);

    Closed_polyline poly_window1;
    poly_window1.add(Point{441, 375});
    poly_window1.add(Point{481, 375});
    poly_window1.add(Point{481, 415});
    poly_window1.add(Point{441, 415});
    poly_window1.set_color(Color::blue);

    Closed_polyline poly_window2;
    poly_window2.add(Point{359, 375});
    poly_window2.add(Point{319, 375});
    poly_window2.add(Point{319, 415});
    poly_window2.add(Point{359, 415});
    poly_window2.set_color(Color::blue);

    //exercise 8
    Circle rb{Point(580,400),40};
    rb.set_color(Color::blue);
    rb.set_style(Line_style(Line_style::solid,5));

    Circle rf{Point(670,400),40};
    rf.set_color(Color::black);
    rf.set_style(Line_style(Line_style::solid,5));
    
    Circle rr{Point(760,400),40};
    rr.set_color(Color::red);
    rr.set_style(Line_style(Line_style::solid,5));

    Circle ry{Point(625,440),40};
    ry.set_color(Color::yellow);
    ry.set_style(Line_style(Line_style::solid,5));

    Circle rg{Point(715,440),40};
    rg.set_color(Color::green);
    rg.set_style(Line_style(Line_style::solid,5));
   
    //exercise 9
    Image My_friend{Point{670, 40}, "My_friend.jpg"};
    Text title{Point{730,200}, "My friend"};

   
    win.attach(My_friend);
    win.attach(title);
    win.attach(rb);
    win.attach(rf);
    win.attach(rr);
    win.attach(ry);
    win.attach(rg);
    win.attach(poly_window1);
    win.attach(poly_window2);
    win.attach(poly_door);
    win.attach(poly_walls);
    win.attach(poly_chimney);
    win.attach(poly_roof);
    win.attach(frame);
    win.attach(ti_11);
    win.attach(ti_12);
    win.attach(ti_13);
    win.attach(ti_21);
    win.attach(ti_22);
    win.attach(ti_23);
    win.attach(ti_31);
    win.attach(ti_32);
    win.attach(ti_33);
    win.attach(poly_S);
    win.attach(poly_C);
    win.attach(r);
    win.attach(poly_rect);
    win.attach(h);
    win.attach(t);
    win.set_label("My friend");
    win.wait_for_button();
}
