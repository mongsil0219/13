#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAX_NAME  20
//구조체 선언  
struct student {
		int 	ID;
		char 	name[MAX_NAME];
		double 	grade;
	};

int main(int argc, char *argv[]) {
	//intstance
	struct student student1 = {123456, "Juyeop", 4.3};
	
	//구조체값 초기화  
	student1.ID = 1004;
	strcpy(student1.name, "Kim");
	student1.grade = 3.3;
	
	printf("ID : %i\n", student1.ID);
	printf("name : %s\n", student1.name);
	printf("grade : %f\n", student1.grade);
	
	
	return 0;
}
