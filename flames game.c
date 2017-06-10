#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

char a[20],b[20];
int x,y,s=0;
int i,j;
char m;
int tc,nc,choice;
do{
printf("\t\t\t\t\twelcome to the FLAMES game\n\n\n");
printf("press 1 to play or 0 to exit\n");
scanf("%d",&choice);
if(choice==1){
     printf("enter your name:\n");
}
else{
    exit(1);
}

scanf("%s",a);
printf("enter your partner's name:\n");
scanf("%s",b);

x=strlen(a);
y=strlen(b);

// code for determining the net value

for(i=0;i<x;i++){
    m=a[i];
    for(j=0;j<y;j++){
        if(m==b[j]){
            a[i]=' ';
            b[j]=' ';
            s=s+2;
            break;
        }
    }
}

tc=x+y;
nc=tc-s;

// code for determining friends,lovers,enemy,sisters,affection

if(nc==2||nc==4||nc==7||nc==9||nc==20){
    printf("enemy\n\n");
}
else if(nc==1){
    printf("sister\n\n");
}
else if(nc==4||nc==5||nc==14||nc==18){
    printf("friends\n\n");
}
else if(nc==6||nc==11||nc==15){
    printf("marraige\n\n");
}
else if(nc==10||nc==19||nc==16){
    printf("lovers\n\n");
}
else if(nc==8||nc==12||nc==13||nc==17){
    printf("affection\n\n");
}


}while(choice);
}



















