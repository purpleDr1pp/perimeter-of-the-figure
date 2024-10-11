#include <string>

class Figure {
public:
	virtual int Perimeter() const = 0;
	virtual ~Figure() {
	}
};

class Triangle : public Figure {
private:
	int side1, side2, side3;
public:
	Triangle(const int& s1, const int& s2, const int& s3) : side1(s1), side2(s2), side3(s3) {
	}

	int Perimeter() const override{
		return side1 + side2 + side3;
	}
};

class Rectangle : public Figure {
private:
	int side1, side2;
public:
	Rectangle(const int& s1, const int& s2) : side1(s1), side2(s2){
	}

	int Perimeter() const override {
		return 2 * (side1 + side2);
	}
};