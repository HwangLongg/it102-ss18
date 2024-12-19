#include <stdio.h>
int main (){
    struct sv {
        int id  ;
        char name[50];
        int age ;
        char phoneNumber[50];

    };
    struct sv arr[50];
    arr[0].id = 1;
    for (int i =0;i<5;i++){
        arr[i+1].id = arr[i].id +1;
        printf ("moi nhap ten sv %d ",i+1);
        fgets (arr[i].name ,sizeof (arr[i].name),stdin);
        printf ("moi nhap tuoi sv %d ",i+1);
        scanf ("%d",&arr[i].age);
        fflush(stdin);
        printf ("moi nhap so dt sv %d ",i+1);
        fgets (arr[i].phoneNumber,sizeof(arr[i].phoneNumber),stdin);

    }
    for (int i =0 ;i<5;i++){
        printf ("id cua sv %d la %d ",i+1,arr[i].id);
        printf ("ten cua sv %d la %s \n",i+1,arr[i].name);
        printf ("tuoi cua sv %d la %d \n",i+1,arr[i].age);
        printf ("so dt cua sv %d la %s ",i+1,arr[i].phoneNumber);
        
    }
    return 0;
}