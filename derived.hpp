#ifndef DERIVED_H
#define DERIVED_H

#include "abstract.hpp"

template<uint8_t N>
class Derived : public Abstract<N> {
private:
public:
	virtual uint8_t getNum();
};

#endif