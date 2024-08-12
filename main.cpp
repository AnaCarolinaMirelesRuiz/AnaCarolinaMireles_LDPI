/*Calculadora de RFC*/

#include <iostream>
#include <stdio.h>

/*Arreglo para primer vocal*/
char calcprimvocal(const std::string& str) {
        for (size_t i = 1; i < str.length();  ++i) {
            char c = str[i];
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return c;
        } 
        return 'X';
}

        std::string calculrfc(const std::string& nombre, const std::string& apellpat, const std::string& apellmat, const std::string& fechanac) {
            std::string rfc;
            
            /*Primer letra apellido paterno*/
            char primletraapellpat = apellpat[0];
            
            /*Primer vocal apellido paterno*/
            char primvocal = calcprimvocal(apellpat);
            
             /*Primer letra apellido materno o se usa una X en caso de que no haya*/
            char primletraapellmat = (!apellmat.empty()) ? apellmat[0] : 'X';
            
            /*Primer letra nombre*/
            char primletranombre = nombre [0];
            
            /*Ultimos dos dígitos del año de nacimiento*/
            std::string anio = fechanac.substr(2, 2);
            
            /*Digitos del mes y el día de nacimiento*/
            std::string mes = fechanac.substr(5, 2);
            std::string dia = fechanac.substr(8, 2);
            
            /*RFC*/
            rfc = primletraapellpat;
            rfc += primvocal;
            rfc += primletraapellmat;
            rfc += primletranombre;
            rfc += anio;
            rfc += mes;
            rfc += dia;
            
            return rfc;
        }
        
    /*Contenedor de datos*/
    int main (){
        std::string nombre, apellpat, apellmat, fechanac;
        
        std::cout << "Ingrese el nombre: ";
        std::getline (std::cin, nombre);
        
        std::cout << "Ingrese el apellido paterno: ";
        std::getline (std::cin, apellpat);
        
        std::cout << "Ingrese el apellido materno (Si no tiene, pulse ENTER): ";
        std::getline (std::cin, apellmat);
        
        std::cout << "Ingrese la fecha de nacimiento (YYYY-MM-DD): ";
        std::getline (std::cin, fechanac);
        
        /*Resultado RFC*/
        
        std::string rfc = calculrfc(nombre, apellpat, apellmat, fechanac);
        
        std::cout << "RFC: " << rfc << std::endl;
    
    return 0;
    }
