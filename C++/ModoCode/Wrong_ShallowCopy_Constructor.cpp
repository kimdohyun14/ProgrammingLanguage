#include <iostream>
#include <cstring>

class Photon_Cannon
{
	int hp, shield;
	int coord_x, coord_y;
	int damage;
	char* name;

public:
	Photon_Cannon(int x, int y);
	Photon_Cannon(int x, int y, const char* cannon_name);
	~Photon_Cannon();

	void show_status();
};

Photon_Cannon::Photon_Cannon(int x, int y)
{
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = NULL;
}

Photon_Cannon::Photon_Cannon(int x, int y, const char* cannon_name)
{
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = new char[strlen(cannon_name) + 1];
	strcpy(name, cannon_name);
}

Photon_Cannon::~Photon_Cannon()
{
	if (name) delete[] name;
}

void Photon_Cannon::show_status()
{
	std::cout << "Photon Cannon : " << name << std::endl;
	std::cout << ";Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
	std::cout << " HP : " << hp << std::endl;
}

int main()
{
	Photon_Cannon pc1(3, 3, "Cannon");
	Photon_Cannon pc2 = pc1; // 얕은 복사가 아닌, 깊은 복사가 일어나야한다. (런타임 에러)

	pc1.show_status();
	pc2.show_status();
	return 0;
}
