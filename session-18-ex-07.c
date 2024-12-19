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

    char nameToDelete[50];
    printf("\nNhap ten sinh vien can xoa: ");
    getchar();
    fgets(nameToDelete, sizeof(nameToDelete), stdin);
    nameToDelete[strcspn(nameToDelete, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < currentSize; i++) {
        if (strcmp(arr[i].name, nameToDelete) == 0) {
            for (int j = i; j < currentSize - 1; j++) {
                arr[j] = arr[j + 1];
            }
            currentSize--;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Sinh vien %s khong ton tai.\n", nameToDelete);
    } else {
        printf("\nDanh sach sinh vien sau khi xoa sinh vien %s:\n", nameToDelete);
        for (int i = 0; i < currentSize; i++) {
            printf("ID: %d, Ten: %s, Tuoi: %d, So DT: %s\n", arr[i].id, arr[i].name, arr[i].age, arr[i].phoneNumber);
        }
    }

    return 0;
}
