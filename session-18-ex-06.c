#include <stdio.h>
int main (){
    struct sv {
        char name[50];
        int id;
        int age;
        char phoneNumber[50];
    };
    struct sv arr[50];
     arr[0]=(struct sv){"Do minh duy",1,15,"123"};
      arr[1]=(struct sv){"Do quang duy",2,15,"133"};
     arr[2]=(struct sv){"Do duy",3,15,"1333"};
    arr[3]=(struct sv){"Do mai duy",4,15,"1223"};
    arr[4]=(struct sv){"Do hien duy",5,15,"153"};
        printf ("moi nhap id ");
        scanf ("%d",&arr[5].id);
        fflush(stdin);
            printf ("moi nhap ten sv can them ");
            fgets (arr[5].name,sizeof(arr[5].name),stdin);
            printf ("moi nhap tuoi sv can them ");
            scanf ("%d",&arr[5].age);
            printf ("moi nhap sdt sv can them ");
            fflush(stdin);
            fgets (arr[5].phoneNumber,sizeof(arr[5].phoneNumber),stdin);
            for (int i =0;i<6;i++){
                printf ("id sv %d \n",arr[i].id);
                printf ("ten sv %s \n",arr[i].name);
                printf ("tuoi cua sv la %d \n",arr[i].age);
                printf ("sdt sv la %s ",arr[i].phoneNumber);
            }
            return 0;}