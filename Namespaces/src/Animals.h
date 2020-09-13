#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>

using namespace std;

namespace sdlc {

const string CATNAME = "Tiddles";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace sdlc */

#endif /* ANIMALS_H_ */
