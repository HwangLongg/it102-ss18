#include <stdio.h>
int main (){
    struct sv {
        char name[50];
        int age ;
        char phoneNumber[50];
    };
    struct sv sv1={"nguyen hoang long ",18,"0976380901"};
    
    sv1.age = 18;
    
    printf ("ten sv %s \n ",sv1.name);
    printf ("tuoi sv %d \n",sv1.age);
    printf ("so dt sv %s ",sv1.phoneNumber);
    return 0;
}