#ifndef ABSTRACT_H
#define ABSTRACT_H

#include <cstdint>

template<uint8_t N>
class Abstract {
protected:
	const uint8_t MAIN_NUM{123};
public:
	static const uint8_t NUM_1{13};
	static const uint8_t NUM_2{37};
	virtual ~Abstract() = default;
	virtual uint8_t getNum() = 0;
};

#endif