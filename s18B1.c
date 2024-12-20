#include <stdio.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[15];
};

int main(){
	struct SinhVien sv = { "Le Nhat LInh", 18, "0123456789" };	
	printf("\nTen: %s ", sv.name);
	printf("\nTuoi: %d ", sv.age);
	printf("\nSdt: %s ", sv.phoneNumber);

	return 0;
}

