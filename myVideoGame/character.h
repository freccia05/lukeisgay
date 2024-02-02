#include "entity.h"
#include "stat.h"

class Mchar :public entity {
protected:
	setat stamina;
	setat majik;
public:
	Mchar(setat stam, setat maj) { stamina = stam; majik = maj; }

};