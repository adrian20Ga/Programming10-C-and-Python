#include <stdio.h>
#include <string.h>

int main(){
	
	
int n1,n2,n3, suma, year ;
printf("type your year born\n\n");
scanf("%d", &n1);
printf("type your month birthday\n\n");
scanf("%d", &n2);
printf("type your day birthday\n\n");
scanf("%d", &n3);

year = (2020 - n1);
printf("your actual age is: %d\n\n", year);
if ((n2==12) && (n3>=22))
{
printf("SIGNO ZODIACAL is CAPRICORNIO :\n\n");
}
if ((n2==1) && (n3<=20)) { printf(" SIGNO ZODIACAL is CAPRICORNIO :\n\n"); } if ((n2==3) && (n3>=21))
{
printf("SIGNO ZODIACAL is ARIES :\n\n");
}
if ((n2==4) && (n3<=20)) { printf("SIGNO ZODIACAL is ARIES :\n\n"); } if ((n2==4) && (n3>=21))
{
printf("SIGNO ZODIACAL is TAURO :\n\n");
}
if ((n2==5) && (n3<=21)) { printf("SIGNO ZODIACAL is TAURO :\n\n"); } if ((n2==5) && (n3>=22))
{
printf("SIGNO ZODIACAL is GEMINIS :\n\n");
}
if ((n2==6) && (n3<=21)) { printf("SIGNO ZODIACAL is GEMINIS :\n\n"); } if ((n2==6) && (n3>=21))
{
printf("SIGNO ZODIACAL is CANCER :\n\n");
}
if ((n2==7) && (n3<=23)) { printf("SIGNO ZODIACAL is CANCER :\n\n"); } if ((n2==7) && (n3>=24))
{
printf("SIGNO ZODIACAL is LEO :\n\n");
}
if ((n2==8) && (n3<=23)) { printf("SIGNO ZODIACAL is LEO :\n\n"); } if ((n2==8) && (n3>=24))
{
printf("SIGNO ZODIACAL is VIRGO :\n\n");
}
if ((n2==9) && (n3<=23)) { printf("SIGNO ZODIACAL is VIRGO :\n\n"); } if ((n2==9) && (n3>=24))
{
printf(" SIGNO ZODIACAL is LIBRA :\n\n");
}
if ((n2==10) && (n3<=23)) { printf("SIGNO ZODIACAL is LIBRA :\n\n"); } if ((n2==10) && (n3>=24))
{
printf(" SIGNO ZODIACAL is ESCORPIO :\n\n");
}
if ((n2==11) && (n3<=22)) { printf("TU SIGNO ZODIACAL is ESCORPIO :\n\n"); } if ((n2==11) && (n3>=23))
{
printf("SIGNO ZODIACAL is SAGITARIO :\n\n");
}
if ((n2==12) && (n3<=21)) { printf("TU SIGNO ZODIACAL is SAGITARIO :\n\n"); } if ((n2==1) && (n3>=21))
{
printf("SIGNO ZODIACAL is ACUARIO :\n\n");
}
if ((n2==2) && (n3<=19)) { printf("SIGNO ZODIACAL is ACUARIO :\n\n"); } if ((n2==2) && (n3>=20))
{
printf("SIGNO ZODIACAL is PICIS :\n\n");
}
if ((n2==3) && (n3<=20))
{
printf("SIGNO ZODIACAL is PICIS:\n\n");
}	
	return 0;
}
