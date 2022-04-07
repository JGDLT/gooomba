#include <iostream>
using namespace std;

class goomba {
private:

	int xpos;
	int ypos;
	char dir;

public:
	goomba(int x, int y);
	void walk();
	void pr();

};

int main() {

	goomba g1(400, 400);


	while (1) {
		g1.walk();
		g1.pr();
		system("pause");
	}

}

goomba::goomba(int x, int y) {
	xpos = x;
	ypos = y;
	dir = 'l';

}

void goomba::walk()
{
	if (xpos <= 0)
		dir = 'r';
	if (xpos >= 400)
		dir = 'l';
	if (dir == 'r')
		xpos += 10;
	if (dir == 'l')
		xpos -= 10;
}

void goomba::pr()
{
	cout << "goomba is at  " << xpos << ", " << ypos << endl;
}
