#include <stdio.h>
#include <unistd.h>

int main(){
	int i;
	printf("type number to count down: ");
	scanf("%d", &i);
	int orignal = i;
	while(!(i < 0)){
		printf("%d\n", i);
		i--;
		sleep(1);
	}
	printf("the count down finished!");
	printf("\n%d", orignal);
	printf(" time ended\n");
	return 0;
}
