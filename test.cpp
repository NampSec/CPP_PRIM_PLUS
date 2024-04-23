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

namespace test
{
	struct session
	{int a; int b;};
	void test(session &s) {return;}
} // namespace test

struct session
{int a; int b;};
int main(void)
{
    using namespace std;
	struct session s;
	test::test(s);
    return 0;
}
