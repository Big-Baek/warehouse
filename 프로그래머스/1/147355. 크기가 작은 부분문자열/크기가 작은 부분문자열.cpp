#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
	int answer = 0;

	


		for (int i = 0; i <= t.size()-p.size(); i++) {
			if (t.substr(i, p.size()) <= p) {
				answer += 1;
			}

		}
	


	return answer;
}