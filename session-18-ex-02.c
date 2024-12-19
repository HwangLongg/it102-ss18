#include <stdio.h>
int main (){
    struct sv {
        char name[50];
        int age ;
        char phoneNumber[50];
    };
    struct sv sv1;
    printf ("moi nhap ten sv 1");
    fgets (sv1.name , sizeof(sv1.name),stdin);
    printf ("moi nhap tuoi sv ");
    scanf ("%d",&sv1.age);
    fflush(stdin);
    printf ("moi nhap sdt sv ");
    fgets (sv1.phoneNumber,sizeof(sv1.phoneNumber),stdin);
    printf ("ten cua sv1 la %s\n",sv1.name);
    printf ("tuoi cua sv la %d\n",sv1.age);
    printf ("sdt cua sv la %s",sv1.phoneNumber);
    return 0;
}