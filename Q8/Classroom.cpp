#include "Classroom.hpp"

Student::Student(){
    grade.resize(3); //3 espaços na memória para 3 notas (U1, U2, U3)
    media = 0;
    approved = false;
}