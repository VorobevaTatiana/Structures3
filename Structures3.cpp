#include <iostream>
struct Adress {
    std::string city;
    std::string street;
    int num_house;
    int num_apart;
    int index;
};
void outfunction(Adress& dd) {
    std::cout << "Город:"<< dd.city << "\n";
    std::cout << "Улица:"<< dd.street<< "\n";
    std::cout << "Номер дома:"<< dd.num_house << "\n";
    std::cout << "Номер квартиры:"<< dd.num_apart<< "\n";
    std::cout << "Почтовый индекс:"<< dd.index << "\n";
 }
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    
    Adress arg;
    std::cout << "Введите город:";
    std::cin >> arg.city;
    std::cout << "Введите улицу:";
    std::cin >> arg.street;
    std::cout << "Введите номер дома:";
    std::cin >> arg.num_house;
    std::cout << "Введите номер квартиры:";
    std::cin >> arg.num_apart;
    std::cout << "Введите индекс:";
    std::cin >> arg.index;

 
    outfunction(arg);
}

