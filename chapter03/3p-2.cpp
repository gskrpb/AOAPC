#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cassert>
#include <cctype>
#define _for(i,a,b) for(int i=(a); i < (b); ++i)
#define _rep(i,a,b) for(int i=(a); i <= (b); ++i)

using namespace std;
int main() {
	int N, count, slen;
	double M[128], ans;
	char line[256], s;
	M['C']=12.01, M['H']=1.008, M['O']=16.0, M['N']=14.01;
	scanf("%d", &N);
	while(N--)
	{
		scanf("%s", line);
		ans = 0;
		s = 0; count = -1; slen = strlen(line);
		_for(i, 0, slen)
		{
			char c = line[i];
			if(isupper(c))
			{
				if(i) {
					if(count == -1) count = 1;
					ans += M[s]*count;
				}
				s = c;
				count = -1;
			}
			else {
				assert(isdigit(c));
				if(count == -1 ) count = 0;
				count = count*10 + c - '0';
			}
		}
		if(count == -1) count = 1;
		ans += M[s]*count;
		printf("%.3lf\n", ans);
	}
	return 0;
}