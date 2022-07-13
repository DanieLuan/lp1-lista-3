#include <vector>
#include <string>

enum scale{UNKNOWN ,GRADUATE, POST_GRADUATE, MASTER, PHD};

class Student{
    public:
        std::string name;
        int matricula;
        std::string email;

        std::vector<float> grade;
        float finalMedia;
        bool approved;

        Student();

};

class Teacher{
    /*
    Nome, Formação, Area de atuação, 
    */
    public:
        int matricula;
        std::string name;
        std::string email;
        int formacao;
        std::string area_atuacao;

};

class Classroom{
    public:
    std::vector<Student> students;
    Teacher teacher;

};