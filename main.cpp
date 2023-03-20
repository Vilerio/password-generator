#include <iostream>
#include <cstdlib>
#include <ctime>


const char alphanumspe[] = "0123456789!@-_#$%&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char alphanum[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanumspe)-1;
int main(int argc, char *argv[])
{
    //Récupération du nombre de mots de passe et de la longueur de chaque mot de passe, ainsi que du type de mot de passe
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    std::string type = argv[3];
    //Génération des mots de passe
    srand(time(0));
    if (type == "alphanum")
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                std::cout << alphanum[rand() % string_length];
            }
            std::cout << std::endl;
        }
    }
    else if (type == "special")
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                std::cout << alphanumspe[rand() % string_length];
            }
            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "Password type error" << std::endl;
    }

    return 0;
}
