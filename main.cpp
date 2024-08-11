/*Operaciones Basicas en C++*/
/*Suma, resta, multiplicación y división*/

#include <iostream>
#include <stdio.h>

int main()
{
   float num1, num2;
   
   std::cout <<"Ingrese el primer número: " <<std::endl;
   std::cin >>num1;
   
   std::cout <<std::endl <<"Ingrese el segundo número: " <<std::endl;
   std::cin >>num2;
   
   std::cout <<std::endl <<"A continuación se encuentran los resultados de las operaciones:" <<std::endl <<std::endl;
   
   float suma = num1 + num2;
   std::cout <<"La suma de los dos números es: " << suma <<std::endl <<std::endl;
   
   float resta = num1 - num2;
   std::cout <<"La resta de los dos números es: " << resta <<std::endl <<std::endl;
   
   float mult = num1 * num2;
   std::cout <<"La multiplicación de los dos números es: " << mult <<std::endl <<std::endl;
   
   float division = num1 / num2;
   std::cout <<"La división de los dos números es: " << division <<std::endl <<std::endl;
    return 0;
}