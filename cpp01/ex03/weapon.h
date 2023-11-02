#include <string>

class Weapon
{
private:
	std::string type;

public:
	Weapon();
	Weapon(const std::string& type);
	const std::string& getType(void) const;
	void setType(const std::string& type);
};

// I think for A reference, as it is in the constructor not to copy whole object just be the alias
// and pointer for B, because it won't be initilized till we explicitely initialize it;