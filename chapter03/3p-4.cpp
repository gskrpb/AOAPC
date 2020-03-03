#include <cstdio>
#include <cstring>

int main()
{
	int N; scanf("%d", &N);
	char line[128];
	bool first = true;
	while(N--)
	{
		if(first) first = false;
		else printf("\n");
		scanf("%s", line);
		int sz = strlen(line);
		for(int i=1; i<=sz; i++){
			if(sz%i) continue;
			bool ans = true;
			for(int j=0; j<i; j++){
				for(int k=j+i; k<sz; k+=i){
					if(line[k] != line[j]) { ans = false; break;}
				}
				if(!ans) break;
			}
			if(ans) { printf("%d\n", i); break;}
		}
	}
	return 0;
}