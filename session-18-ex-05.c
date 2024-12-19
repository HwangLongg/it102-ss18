#include <stdio.h>
int main (){
    struct sv {
        int id  ;
        char name[50];
        int age ;
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
    }do {
        int c = 0;
        int input ;
        printf ("moi nguoi dung nhap id muon sua ");
        scanf ("%d",&input);
        if (input >=1&&input<=5){
    for (int i = 0;i<5;i++){
        if (arr[i].id == input ){
            printf ("moi nguoi dung sua ten cua sv %d \n",i+1);
            fgets (arr[i].name,sizeof(arr[i].name),stdin);
            printf ("moi nguoi dung sua tuoi cua sv %d ",i+1);
            scanf ("%d",&arr[i].age);
            getchar();
            c++;
        }}
    }
    else {
        printf ("moi nguoi dung nhap lai ");
    }}while (c != 1);
    for (int i =0 ;i<5;i++){
        printf ("id cua sv %d la %d ",i+1,arr[i].id);
        printf ("ten cua sv %d la %s \n",i+1,arr[i].name);
        printf ("tuoi cua sv %d la %d \n",i+1,arr[i].age);
    }
    return 0;
}