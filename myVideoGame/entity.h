#include <iostream>

class entity {
protected:
	std::string name;
	double health;
public:
	entity(double h, double s, double m, std::string n) {
		name = n;
		health = h;
	}
	virtual void attack() = 0;
};
