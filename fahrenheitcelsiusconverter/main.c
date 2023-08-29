#include <stdio.h>
#include <stdlib.h>

void tocelsius(float girdi)
{
  float sonuc;
  sonuc = 0.55555 * (girdi-32);
  printf("%.2f Fahrenheit = %.2f Celsius",girdi,sonuc);

}

void tofahrenheit(float girdi)
{
    float sonuc;
    sonuc = (1.8 * girdi)+32;
    printf("%.2f Celsius = %.2f fahrenheit",girdi,sonuc);
}


int main()
{
    printf("1-Fahrenheit to Celsius\n2-Celcius to Fahrenheit\n");
    int secim;
    float deger;
    scanf("%d",&secim);
    printf("What number do you want to convert?\n");
    scanf("%f",&deger);
    switch(secim)
    {
        case 1 : tocelsius(deger);
        break;
        case 2 : tofahrenheit(deger);
        break;
        default : printf("Invalid choice.");
        break;
    }

    /*
    f=(1.8*c)+32   c=(5/9)*(F-32)
    */
    return 0;
}
