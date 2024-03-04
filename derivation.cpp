#include <iostream>
#include <vector>

class Shape
{
protected:
    int posx;
    int posy;
    int color;
    Shape(int x, int y, int col) : posx(x), posy(y), color(col) {}

public:
    void move(int dx, int dy)
    {
        posx = posx + dx;
        posy = posy + dy;
    }
    virtual float area() { return 9999.99; } // une abhération
    /*le virtual fait une liaison dynamique pour bien reprendre
    le bon type lorsqu'on fait area*/
};

/* on crée une classe dérivée circle qui est aussi une shape et
qui en a tous les attributs*/

class Circle : public Shape
{
    int radius;

public:
    Circle(int x, int y, int r, int col)
        : radius(r), Shape(x, y, col) {}

    float area()
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
    int width;
    int length;
};

int main()
{
    Circle c1(10, 20, 3, 230);
    Circle c2(100, 200, 4, 230);
    Circle *pc = &c1;
    Shape *ps = &c1;
    ps->move(3, 2);

    std::cout << c1.area() << std::endl;
    std::cout << ps->area() << std::endl;

    std::vector<Shape *> l;
    l.push_back(&c1);
    l.push_back(&c2);
    l[0]->move(4, 5);
}