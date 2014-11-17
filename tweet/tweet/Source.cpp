#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Math.h>

int main()
{
int i=1;
system("MODE COM2: BAUD=9600 PARITY=n DATA=8 STOP=1");
FILE* port=NULL;
char pass[50];
while(1){
FILE *fp;
fp=fopen("C:\\wamp\\www\\tweet\\data.txt","r");
fscanf(fp,"%s",pass);
//printf("%s",pass);
if(strcmp(pass,"8055")==0){
port = fopen( "COM2:", "w" );
if(port==NULL){
	printf("Error!");
}
else{
	printf("Valid Password\n");
fprintf(port,"1");
fclose( port ) ;
fcloseall();
}
}
else{
	printf("Invalid password\n");
	port = fopen( "COM2:", "w" );
if(port==NULL){
	printf("Error!");
}
else{
fprintf(port,"2");
fclose( port ) ;
fcloseall();
}
}
}
return 0;
}