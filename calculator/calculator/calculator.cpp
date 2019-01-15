#include<stdio.h>
#include"CSY.h"
#include"HS.h"
#include"JDM.h"
#include"KTG.h"

int main()
{
	int a = 4;
	int b = 2;
	if((sum(a,b)==6) && (sub(a,b)==2) && (time(a,b)==8) && (divide(a,b)==2))
		printf("true");
	else
		printf("false");

	getchar();
	getchar();
		return 0;
}