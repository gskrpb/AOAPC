#include <cstdio>
#include <cstring>
#define _for(i,a,b) for(int i=(a); i < (b); ++i)
#define _rep(i,a,b) for(int i=(a); i <= (b); ++i)

const int maxn = 85;

int main() {
	int n;
	char s[128];
	scanf("%d", &n);
	while(n--)
	{
		scanf("%s", s);
		int suc = 0, score = 0, len = strlen(s);
		_for(j, 0, len)
		{
			if (s[j] == 'O')
			{
				suc++;
				score += suc;
			}
			else
			{
				suc = 0;
			}
		}
		printf("%d\n", score);
	}
	return 0;
}