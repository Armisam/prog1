#include "Simple_window.h"
#include "Graph.h"

int main()
{
    using namespace Graph_lib;

    //exercise 1
    Simple_window win {Point{100,100}, 800, 1000,"ch13_exercises"};
    
    //exercise 2
    Lines mesh_grid;
    for(int i = 100; i<= 800; i += 100)
    {
        mesh_grid.add(Point{i,0}, Point{i, 800});
        mesh_grid.add(Point{0,i}, Point{800, i});
    }
    
    //exercise 3
    Rectangle first{Point{0,0},100,100};
    Rectangle second{Point{100,100},100,100};
    Rectangle third{Point{200,200},100,100};
    Rectangle fourth{Point{300,300},100,100};
    Rectangle fifth{Point{400,400},100,100};
    Rectangle sixth{Point{500,500},100,100};
    Rectangle seventh{Point{600,600},100,100};
    Rectangle eighth{Point{700,700},100,100};

    first.set_fill_color(Color::red);
    second.set_fill_color(Color::red);
    third.set_fill_color(Color::red);
    fourth.set_fill_color(Color::red);
    fifth.set_fill_color(Color::red);
    sixth.set_fill_color(Color::red);
    seventh.set_fill_color(Color::red);
    eighth.set_fill_color(Color::red);

    //exercise 4
    Image p1{Point{0,200}, "no1.jpg"};
    Image p2{Point{600,200}, "no2.jpg"};
    Image p3{Point{0,500}, "no3.jpg"};
    Image p4{Point{600,400}, "no4.jpg"};

    //exercise 5
    Image moved{Point{0,0}, "moved.jpg"};


    win.attach(moved);
    win.attach(p1);
    win.attach(p2);
    win.attach(p3);
    win.attach(p4);
    win.attach(first);
    win.attach(second);
    win.attach(third);
    win.attach(fourth);
    win.attach(fifth);
    win.attach(sixth);
    win.attach(seventh);
    win.attach(eighth);
    win.attach(mesh_grid);
    win.set_label("ch13_exercises");


    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            win.wait_for_button();
            if(j < 7)
            {
                moved.move(100,0);
            }   
            else
            {
                moved.move(-700,100);
            }     
        }
    }
}
