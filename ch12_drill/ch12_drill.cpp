/*
    g++ main.cpp Graph.cpp Window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"

int main()
{
    using namespace Graph_lib;

    //ablak
    Simple_window win {Point{100,100}, 600, 400,"My window"};
    
    //x es y tengely
    Axis xa{Axis::x, Point{20,300}, 280, 10, "x tengely"};
    Axis ya{Axis::y, Point{20,300}, 280, 10, "y tengely"};
    ya.set_color(Color::yellow);
    ya.label.set_color(Color::dark_green);
    
    //szinusz fuggveny
    Function sine{sin,0,100,Point{20,200},1000,20,20};
    sine.set_color(Color::dark_red);

    //haromszog pontokból
    Polygon poly;
    poly.add(Point{200,200});
    poly.add(Point{400,200});
    poly.add(Point{177,100});
    poly.set_color(Color::red);
    poly.set_style(Line_style::dot);

    //teglalap rectangle osztallyal
    Rectangle r{Point{250,50}, 100, 50};
    r.set_color(Color::blue);
    r.set_style(Line_style::solid);

    //teglalap polygonokkal
    Closed_polyline poly_rect;
    poly_rect.add(Point{450,300});
    poly_rect.add(Point{350,300});
    poly_rect.add(Point{350,240});
    poly_rect.add(Point{450,240});
    poly_rect.add(Point{500,280});
    poly_rect.set_color(Color::yellow);
    poly_rect.set_style(Line_style::dash);
    poly_rect.set_fill_color(Color::green);
       
    //felirat
    Text t{Point{140,25},"Copyright szekely_csaba Prog1 repo"};
    t.set_font_size(17);
    t.set_font(Font::times_bold);

    //kep beszuras
    Image kep{Point{300,250}, "badge.jpg"}; 
    kep.set_mask(Point{200,200}, 200, 200);
    //kep.move(50, 10);

    //kor vonala
    Circle c{Point(500,75),40};

    //ellipszis
    //Ellipse e{Point{100,200}, 75,25}; ami nem mukodik
    

    //kor kozeppontja
    Mark m{Point(500,75),'x'};

    ostringstream oss;
    oss << "screen size: " << x_max() << "*" << y_max()
    << "; window size: " << win.x_max() << "*" << win.y_max();
    Text sizes {Point{200,300},oss.str()};

    //ablak szerkesztes
    win.attach(xa);
    win.attach(ya);
    win.attach(sine);
    win.attach(poly);
    win.attach(r);
    win.attach(poly_rect);
    win.attach(t);
    win.attach(c);
    win.attach(sizes);
    win.attach(m);
    win.attach(kep);
    win.set_label("Kepernyo");
    win.wait_for_button();
}
