#ifndef CAT_H_
#define CAT_H_

#include <iostream>

using namespace std;

namespace cat {

const string CATNAME = "Freddy";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

}

#endif /* CAT_H_ */
