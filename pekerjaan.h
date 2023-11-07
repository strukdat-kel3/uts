#pragma once

#include "string"
#include "iostream"

namespace pekerjaan
{
    struct Node
    {
        std::string pekerjaan;
        std::string biaya;
        std::string tanggalSelesai;

        Node *next;
    };

    void init(Node *head)
    {
        std::string pekerjaan;
        std::string biaya;
        std::string tanggalSelesai;
        std::cout << "Input Pekerjaan Customer : ";
        std::cin.ignore();
        std::getline(std::cin, pekerjaan);

        std::cout << "Input Biaya Customer : ";
        std::getline(std::cin, biaya);

        std::cout << "Input Tanggal Selesai Customer : ";
        std::getline(std::cin, tanggalSelesai);
        
        head->pekerjaan = pekerjaan;
        head->biaya = biaya;
        head->tanggalSelesai = tanggalSelesai;

        head->next = nullptr;
    }

    void view(Node *head)
    {
        Node *list{head};
        while (list)
        {
            std::cout << "\nPekerjaan \t: " << list->pekerjaan << std::endl;
            std::cout << "Biaya \t: " << list->biaya << std::endl;
            std::cout << "Tanggal Selesai : " << list->tanggalSelesai << std::endl;
        
            list = list->next;
        }
    }

    void append(Node *head)
    {
        std::string pekerjaan;
        std::string biaya;
        std::string tanggalSelesai;
        
        std::cout << "\nInput Pekerjaan Customer : ";
        std::cin.ignore();
        std:getline(std::cin, pekerjaan);

        std::cout << "Input Biaya Customer : ";
        std::getline(std::cin, biaya);

        std::cout << "Input Tanggal Selesai Customer : ";
        std::getline(std::cin, tanggalSelesai);

        Node *newData{new Node};

        newData->pekerjaan = pekerjaan;
        newData->biaya = biaya;
        newData->tanggalSelesai = tanggalSelesai;
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
