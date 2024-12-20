#include <stdio.h>
#include <string.h>

typedef  struct {
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
}SinhVien;

void search( SinhVien sv[], int n );

int main(){
	SinhVien sv[50] = {
        { 1, "Le Van A ", 18 , "0123456789" },	
        { 2, "Le Van B", 18 , "0123456789" },	
        { 3, "Le Van C", 18 , "0123456789" },
        { 4, "Le Van D", 18 , "0123456789" },
    };
    
	search(sv, 4);
	
	
	return 0;
}

void search( SinhVien sv[], int n ){
	int id, count = 0;
	printf("\nNhap id muon tim: ");
	scanf("%d", &id);
	fflush(stdin);
	
	for ( int i = 0; i< n; i++){
		if ( sv[i].id == id ){
			count = 1;
			break;
		}
	}
	
	if ( count == 0 ){
		printf("\n Khong ton tai id can tim!");
	}else {
		printf("\nNhap ten can sua: ");
		fgets( sv[id-1].name, sizeof( sv[id-1].name), stdin);
		
		int len = strlen(sv[id-1].name);
		sv[id-1].name[len-1] = '\0';
		
		printf("Nhap tuoi can sua: ");
		scanf("%d", &sv[id-1].age);
		
		for ( int i = 0; i<5 ; i++){
			printf("\n\nID: %d", sv[i].id);
			printf("\nTen: %s", sv[i].name);
			printf("\nTuoi: %d", sv[i].age);
			printf("\nSdt: %s ", sv[i].phoneNumber);
		}
	
	}
}
