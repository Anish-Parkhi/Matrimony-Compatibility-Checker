#include<stdio.h>
struct check
{
    char name[100];
    char gender[10];
    int caring;
    int loving;
    int sincere;
    int faithful;
};

int main(){
    struct check check1;
    struct check check2;   
    scanf("%s",&check1.name);
    scanf("%s",&check1.gender);
    scanf("%d",&check1.caring);
    scanf("%d",&check1.loving);
    scanf("%d",&check1.sincere);
    scanf("%d",&check1.faithful);
    scanf("%s",&check2.name);
    scanf("%s",&check1.gender);
    scanf("%d",&check2.caring);
    scanf("%d",&check2.loving);
    scanf("%d",&check2.sincere);
    scanf("%d",&check2.faithful);
    if(check1.caring>8 && check2.caring > 8){
        if(check1.loving> 7 && check2.loving > 7){
            if(check1.sincere> 7 && check2.sincere > 7){
                if(check1.faithful> 7 && check2.faithful >7){
                    printf("%s and %s - You both are made for each other. Congratulations:)",check1.name,check2.name);
                }
            }
        }
    }else{
        printf("%s and %s - You both are not compatible. Sorry:(",check1.name,check2.name);
    }
}

