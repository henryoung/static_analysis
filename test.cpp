#include <vector>

int main()
{
	std::vector<int> v(100);
	for (auto it = v.begin(); it != v.end(); ++it) {
		if ((*it) == 0) {
			v.erase(it);
		}
	}
	return 0;
}
