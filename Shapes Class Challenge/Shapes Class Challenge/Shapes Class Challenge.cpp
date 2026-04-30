#include <iostream> 
#include <string> 
using namespace std;

class Shape { // The base class for shapes
public: 
	   string color; // Attribute (string variable) 
public: Shape(string color) : color(color) {}
	  //To make it simple this method to be override so that the other class can add their properties
	  virtual void getArea() const {
		  cout << "The Shape is " << color << '\n';
	  }
};

//Rectangle is a subclass that has an additional properties: Height and Width
class rectangle : public Shape{
private:
	string name;
	int height;
	int width;
public: rectangle(string color, string name, int height, int width) : Shape(color), name(name), height(height), width(width){}
	  //Override the method to add the new properties
	  void getArea() const override {
		  cout << "The "<< name <<" is " << color << ", " << height << " in height, and " << width <<" in width." << '\n';
	  }

};

//Triangle is a subclass that has an additional properties: Height and Base
class triangle : public Shape {
private:
	string name;
	int base;
	int height;
public: triangle(string color, string name, int base, int height) : Shape(color), name(name), base(base), height(height){}
	  //Override the method to add the new properties
	  void getArea() const override {
		  cout << "The " << name << " is " << color << ", " << height << " in height, and " << base << " is the base." << '\n';
	  }

};

//Triangle is a subclass that has an additional properties: Radius
class circle : public Shape {
private:
	string name;
	int radius;
public: circle(string color, string name, int radius) : Shape(color), name(name), radius(radius) {}
	  //Override the method to add the new properties
	  void getArea() const override {
		  cout << "The " << name << " is " << color << ", and " << radius << " is the radius" << '\n';
	  }
};


int main() {
	int height = 20;
	int width = 40;
	int base = 30;
	int radius = 10;

	//This show the base class
	Shape mainShape("Grey");
	mainShape.getArea();

	//This show the subclass: rectangle
	rectangle rectangleShape("Blue", "Rectangle", height, width);
	rectangleShape.getArea();

	//This show the subclass: triangle
	triangle triangleShape("Purple", "Triangle", base, height);
	triangleShape.getArea();

	//This show the subclass: circle
	circle circleShape("Green", "Circle", radius);
	circleShape.getArea();

	return 0;
}
