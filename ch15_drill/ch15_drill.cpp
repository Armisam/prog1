#include "Simple_window.h"
#include "Graph.h"

double one(double x) { return 1; } //one constant
double slope(double x) { return x/2; } //slope
double square(double x) { return x*x; } //square
double sloping_cos(double x) { return cos(x)-slope(x); } //sloping cos


int main()
{
    using namespace Graph_lib;

    //some important declaration
    constexpr int xmax = 600;
    constexpr int ymax = 600;
    constexpr int x_orig = xmax/2;
    constexpr int y_orig = ymax/2;
    Point orig{x_orig,y_orig};
    constexpr int r_min = -10;
    constexpr int r_max = 11;
    constexpr int n_points = 400;
    constexpr int x_scale = 20;
    constexpr int y_scale = 20;
    constexpr int xlength = xmax - 200;
    constexpr int ylength = ymax - 200;

    //exercise 1/1
    Simple_window win {Point{100,100}, xmax, ymax,"Function graphs"};
    
    //exercise 1/4
    Axis x {Axis::x, Point{100,y_orig}, xlength, xlength/x_scale, "1 = = 20 pixels"};
    Axis y {Axis::y, Point{x_orig,ylength+100}, ylength, ylength/y_scale, "1 = = 20 pixels"};
    
    //exercise 1/5
    x.set_color(Color::red);
    y.set_color(Color::red);

    //exercise 2/1
    //Function ex21 {one, r_min, r_max, orig, n_points};

    //exercise 2/2
    Function ex22 {one, r_min, r_max, orig, n_points, x_scale, y_scale};
    ex22.set_style(Line_style(Line_style::solid,4));

    //exercise 2/4
    Function ex24 {slope, r_min, r_max, orig, n_points, x_scale, y_scale};
    ex24.set_color(Color::yellow);
    ex24.set_style(Line_style(Line_style::solid,4));

    //exercise 2/5
    Text ts {Point{100,ymax-170}, "x/2"};

    //exercise 2/6
    Function ex26 {square, r_min, r_max, orig, n_points, x_scale, y_scale};
    ex26.set_color(Color::green);
    ex26.set_style(Line_style(Line_style::solid,4));

    //exercise 2/7
    Function ex27 {[] (double x) { return cos(x); }, r_min, r_max, orig, n_points, x_scale, y_scale};

    //exercise 2/8
    ex27.set_color(Color::blue);
    ex27.set_style(Line_style(Line_style::solid,4));

    //exercise 2/9
    Function ex29 {sloping_cos, r_min, r_max, orig, n_points, x_scale, y_scale};
    ex29.set_color(Color::magenta);
    ex29.set_style(Line_style(Line_style::solid,4));


    win.attach(ex22);
    win.attach(ex24);
    win.attach(ex26);
    win.attach(ex27);
    win.attach(ex29);
    win.attach(ts);
    win.attach(x);
    win.attach(y);
    win.wait_for_button();
}
