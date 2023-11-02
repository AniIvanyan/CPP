#pragma once
#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		Zombie(const std::string& name);
		std::string getName(void) const;
		void announce(void);
};