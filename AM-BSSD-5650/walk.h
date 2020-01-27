#pragma once

//HW point 2
#ifndef walk_h
#define walk_h
#include <string>

class walk {
public:
	virtual std::string walking() = 0;
};

class fourlegged :virtual public walk {
public:
	std::string walking() {

		return "walking on 4 legs";
	};
};
class twolegged :virtual public walk {
public:

	std::string walking() { return "walking on two legs"; };
};

class nolegged :virtual public walk {
public:

	std::string walking() { return "without legs"; };
};

#endif // !walk_h