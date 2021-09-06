# Classes and Objects

<!-- example -->

```
class Box
{
public:
    double length;
    double breadth;
    double height;
};
```

## Class member functions

A member function of a class is a function that has its definition or its prototype within the class definition like any other variable.

```
class Box
{
public:
    double length;
    double breadth;
    double height;
    double getVolume(void);
};
double Box::getVolume()
{
    return (this->length * this->breadth * this->height);
}
```

<!-- int main()
{
    Box box1;

    box1.length = 2;
    box1.breadth = 2;
    box1.height = 4;
    std::cout << box1.getVolume() << std::endl;
} -->

## Class access modifiers

With an inline function, the compiler tries to expand the code in the body of the function in place of a call to the function.

### The public Members

A public member is accessible from anywhere outside the class but within a program. You can set and get the value of public variables without any member
function

### The private Members

A private member variable or function cannot be accessed, or even viewed from outside the class. Only the class and friend functions can access private
members.
By default all the members of a class would be private.

### The protected Members

A protected member variable or function is very similar to a private member but it provided one additional benefit that they can be accessed in child classes
which are called derived classes.

## Constructor & destructor

A class constructor is a special function in a class that is called when a new object of the class is created. A destructor is also a special function which is called when created object is deleted.

A destructor is a special member function of a class that is executed whenever an object of it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.

<!-- Using Initialization Lists to Initialize Fields -->

```
class Box
{
private:
    double length;
    double width;
    double height;`
public:
    Box();
    Box(double l, double w, double h);
    ~Box();
    double getVolume(void);
};

Box::Box(double l, double w, double h):length(l), width(w), height(h)
{
    std::cout << "Constructor with parametres was called" << std::endl;
}
Box::Box():length(0),  width(0), height(0)
{
    std::cout << "Constructor with no parametres was called" << std::endl;
}
Box::~Box()
{
    std::cout << "destructor was called" << std::endl;
}
double Box::getVolume()
{
    return (this->length * this->width * this->height);
}
```

<!-- int main()
{
    Box box1;
    Box box2(2, 4, 5);

    std::cout << box1.getVolume() << std::endl;
    std::cout << box2.getVolume() << std::endl;
} -->

## C++ copy constructor

The copy constructor is a constructor which creates an object by initializing it with an object of the same class, which has been

```
class Box
{
private:
    double length;
    double width;
    double height;

public:
    Box();
    Box(const Box &obj);
    Box(double l, double w, double h);
    ~Box();
    double getVolume(void);
};

Box::Box(const Box &obj)
{
    std::cout << "Copy constructor was called." << std::endl;
    length = 2 * obj.length;
    height = 2 * obj.height;
    width = 2 * obj.width;
}
Box::Box(double l, double w, double h) : length(l), width(w), height(h)
{
    std::cout << "Constructor with parametres was called" << std::endl;
}
Box::Box() : length(0), width(0), height(0)
{
    std::cout << "Constructor with no parametres was called" << std::endl;
}
Box::~Box()
{
    std::cout << "destructor was called" << std::endl;
}
double Box::getVolume()
{
    return (this->length * this->width * this->height);
}
```

<!-- int main()
{
    Box box1(1, 3, 5);
    Box box2(box1);
    std::cout << box1.getVolume() << std::endl;
    std::cout << box2.getVolume() << std::endl;
} -->

## C++ friend functions

A friend function is permitted full access to private and protected members of a class.

```
using namespace std;
class Box
{
    double width;

public:
    friend void printWidth(Box box);
    void setWidth(double wid);
};
void Box::setWidth(double wid)
{
    width = wid;
}
void printWidth(Box box)
{
    cout << "Width of box : " << box.width << endl;
}
```

<!-- int main()
{
    Box box;
    box.setWidth(10.0);
    printWidth(box);
    return 0;
} -->

## C++ inline functions

With an inline function, the compiler tries to expand the code in the body of the function in place of a call to the function.

## The this pointer in C++

Every object has a special pointer this which points to the object itself.

## Pointer to C++ classes

A pointer to a class is done exactly the same way a pointer to a structure is. In fact a class is really just a structure with functions in it.

## Static members of a class

Both data members and function members of a class can be declared as static.
