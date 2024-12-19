#include <stdio.h>
#include <string.h>

struct sinhvien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct sinhvien arr[50];
    int currentSize = 5;

    arr[0] = (struct sinhvien){1, "nguyen hoang long", 18, "0976380901"};
    arr[1] = (struct sinhvien){2, "tran minh tu", 20, "0906123456"};
    arr[2] = (struct sinhvien){3, "le thi lan", 22, "0912345678"};
    arr[3] = (struct sinhvien){4, "pham quang hieu", 21, "0934567890"};
    arr[4] = (struct sinhvien){5, "do thi mai", 19, "0945678901"};

    printf("Danh sach sinh vien ban dau:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So DT: %s\n", arr[i].id, arr[i].name, arr[i].age, arr[i].phoneNumber);
    }

    int position;
    struct sinhvien newStudent;

    printf("\nNhap vi tri can chen (1 den %d): ", currentSize + 1);
    scanf("%d", &position);

    if (position < 1 || position > currentSize + 1) {
        printf("Vi tri chen khong hop le.\n");
        return 1;
    }

    newStudent.id = currentSize + 1;
    getchar();
    printf("Nhap ten sinh vien: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);

    getchar();
    printf("Nhap so dien thoai sinh vien: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';
    for (int i = currentSize; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = newStudent; 

    currentSize++;

    printf("\nDanh sach sinh vien sau khi chen sinh vien:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So DT: %s\n", arr[i].id, arr[i].name, arr[i].age, arr[i].phoneNumber);
    }

    return 0;
}
