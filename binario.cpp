#include <iostream.h>

void cbin(int);

int main (void)
{
    unsigned int num;
    num = 257;
    while (num > 255){
          cout << "Ingrese el numero a convertir a binario: ";
          cin >> num;
          }
    cbin(num);
    cout << endl;
    system("PAUSE");
}

void cbin(int num)
{
     int len = 8;
     char bnum[len]; // = {"00000000"};
     int x, i;
     int aconvertir = num;
     
     while (len) {
           x = (int)num % 2;
           if ( x )
               bnum[len-1] = '1';
           else
               bnum[len-1] = '0';
           num = num / 2;
           len = len - 1;
     }
     cout << "El numero " << aconvertir << " en binario es " << bnum;
}

