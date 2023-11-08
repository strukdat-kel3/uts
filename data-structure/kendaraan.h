#pragma once

#include "string"
#include "iostream"

namespace kendaraan
{
    struct Node
    {
        std::string merek;
        std::string model;
        std::string nomorPlat;
        unsigned short tahunPembuatan;

        Node *next;
    };

    void init(Node *head)
    {
        std::string merek;
        std::string model;
        std::string nomorPlat;
        unsigned short tahunPembuatan;
        std::cout << "Input merek kendaraan \t\t: ";
        std::getline(std::cin, merek);
        std::cout << "Input model kendaraan \t\t: ";
        std::getline(std::cin, model);
        std::cout << "Input nomor plat kendaraan \t: ";
        std::getline(std::cin, nomorPlat);
        std::cout << "Input tahun pembuatan kendaraan : ";
        std::cin >> tahunPembuatan;
        std::cin.ignore();
        head->merek = merek;
        head->model = model;
        head->nomorPlat = nomorPlat;
        head->tahunPembuatan = tahunPembuatan;

        head->next = nullptr;
    }

    void view(Node *head)
    {
        Node *list{head};
        while (list)
        {
           std::cout <<"\nMerek \t\t\t: " <<list->merek << std::endl;
           std::cout <<"Model \t\t\t: " <<list->model << std::endl;
           std::cout <<"Nomor plat \t\t: " <<list->nomorPlat << std::endl;
           std::cout <<"Tahun pembuatan \t: " <<list->tahunPembuatan << std::endl;
           std::cout << std::endl;
           list = list->next;
        }
    }
    void append(Node *head)
    {
        std::string merek;
        std::string model;
        std::string nomorPlat;
        unsigned short tahunPembuatan;
        std::cout << "\nInput merek kendaraan \t\t: ";
        std::getline(std::cin, merek);
        std::cout << "Input model kendaraan \t\t: ";
        std::getline(std::cin, model);
        std::cout << "Input nomor plat kendaraan \t: ";
        std::getline(std::cin, nomorPlat);
        std::cout << "Input tahun pembuatan kendaraan : ";
        std::cin >> tahunPembuatan;
        std::cin.ignore();
        std::cout << std::endl;

        Node *newData{new Node};

        newData->merek = merek;
        newData->model = model;
        newData->nomorPlat = nomorPlat;
        newData->tahunPembuatan = tahunPembuatan;
        newData->next = nullptr;

        Node *cur{head};
        while (cur)
        {
            if (cur->next == nullptr)
            {
                cur->next = newData;
                return;
            }
            cur = cur->next;
        }
    }
}
