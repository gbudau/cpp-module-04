#ifndef IASTEROID_HPP_
#define IASTEROID_HPP_
#include <string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid {
 public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(DeepCoreMiner*) const = 0;
	virtual std::string beMined(StripMiner*) const = 0;
	virtual std::string getName() const = 0;
};

#endif  // IASTEROID_HPP_
