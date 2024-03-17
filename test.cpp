#include <iostream>
struct free_throws
{
	std::string name;
	int made;
	int attempts;
	float percent;
};
const free_throws & clone(free_throws &ft)
{
	free_throws *pt = new free_throws;
	*pt = ft;
	return *pt;
}

int main(void)
{
    using namespace std;
	free_throws three = {"Minnie Max", 7, 9};
	const free_throws &jolly = clone(three);
    return 0;
}
