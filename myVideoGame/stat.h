#include <iostream>

class setat {
private:
	int amount;
public:
	setat(int a) {
		amount = a;
	}
	void addStat(int up) {
		amount = amount + up;
	}
};
