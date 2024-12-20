#include <stdio.h>
#include <string.h>

typedef  struct {
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
}SinhVien;

void add( SinhVien sv[], int n );

int main(){
	SinhVien sv[50] = {
        { 1, "Le Van A", 18, "0123456789" },	
        { 2, "Le Van B", 18 , "0123456789" },	
        { 3, "Le Van C", 18 , "0123456789" },
        { 4, " Le Van D", 18, "0123456789" },
    };
    
	add(sv, 5);
	
	return 0;
}

void add( SinhVien sv[], int n ){
	sv[n].id = n+1;
	
	printf("\nNhap ten: ");
	fgets( sv[n].name, sizeof( sv[n].name), stdin);
	int len = strlen(sv[n].name);
	sv[n].name[len-1] = '\0';
	
	printf("Nhap tuoi: ");
	scanf("%d", &sv[n].age);
	fflush(stdin);
	printf("Nhap sdt: ");
	fgets( sv[n].phoneNumber, sizeof( sv[n].phoneNumber), stdin);
	
	
	
	for ( int i = 0; i<n+1 ; i++){
		printf("\n\nID: %d", sv[i].id);
		printf("\nTen: %s", sv[i].name);
		printf("\nTuoi: %d", sv[i].age);
		printf("\nSdt: %s ", sv[i].phoneNumber);
	}

	
}

