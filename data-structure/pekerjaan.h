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
        std::cout << "\nInput Jenis Layanan Servis \t: ";                
        std::getline(std::cin, pekerjaan);

        std::cout << "Input Total Biaya \t\t: ";
        std::getline(std::cin, biaya);

        std::cout << "Input Tanggal Selesai \t\t: ";
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
            std::cout << "\nJenis Layanan Servis \t: " << list->pekerjaan << std::endl;
            std::cout << "Total Biaya \t\t: " << list->biaya << std::endl;
            std::cout << "Tanggal Selesai \t: " << list->tanggalSelesai << std::endl;
        
            list = list->next;
        }
    }

    void append(Node *head)
    {
        std::string pekerjaan;
        std::string biaya;
        std::string tanggalSelesai;
        
        std::cout << "\nInput Jenis Layanan Servis \t: ";
        std:getline(std::cin, pekerjaan);

        std::cout << "Input Total Biaya \t\t: ";
        std::getline(std::cin, biaya);

        std::cout << "Input Tanggal Selesai \t\t: ";
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
