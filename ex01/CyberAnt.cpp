#include "CyberAnt.hpp"

CyberAnt::CyberAnt() : Enemy(100, "CyberAnt") {
	std::cout << "* crick crick crick *\n";
	return;
}

CyberAnt::CyberAnt(CyberAnt const & src) : Enemy(100, "CyberAnt") {
	*this = src;
}

CyberAnt &	CyberAnt::operator=(CyberAnt const & rhs) {
	if (this != &rhs) {
		this->setType(rhs.getType());
		this->setHP(rhs.getHP());
	}
	std::cout << "* crick crick crick *\n";
	return *this;
}

CyberAnt::~CyberAnt() {
	std::cout << "* OUCH *\n";
	return;
}
