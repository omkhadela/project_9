#include<stdio.h>
enum week{
	mon=1,tue,wed,thu,fri,sat,sun
};
main(){
	enum week w;
	int day;
	day=fri;
	printf("The day of week : %d",day);
}
