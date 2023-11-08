#pragma once

#include "string"
#include "iostream"

namespace customer
{
    struct Node
    {
        std::string nama;
        std::string alamat;
        std::string telp;

        Node *next;
    };

    void init(Node *head)
    {
        std::string nama;
        std::string alamat;
        std::string telp;
        std::cout << "Input Nama Customer \t: ";
        std::getline(std::cin, nama);
        std::cout << "Input Alamat Customer \t: ";
        std::getline(std::cin, alamat);
        std::cout << "Input Telp Customer \t: ";
        std::getline(std::cin, telp);
        std::cout << std::endl;
        head->nama = nama;
        head->alamat = alamat;
        head->telp = telp;

        head->next = nullptr;
    }

    void view(Node *head)
    {
        Node *list{head};
        while (list)
        {
            std::cout << "Nama \t: " << list->nama << std::endl;
            std::cout << "Alamat \t: " << list->alamat << std::endl;
            std::cout << "No Telp : " << list->telp << std::endl;
            std::cout << std::endl;
            list = list->next;
        }
    }

    void append(Node *head)
    {
        std::string nama;
        std::string alamat;
        std::string telp;
        std::cout << "Input Nama Customer \t: ";
        std::getline(std::cin, nama);
        std::cout << "Input Alamat Customer \t: ";
        std::getline(std::cin, alamat);
        std::cout << "Input Telp Customer \t: ";
        std::getline(std::cin, telp);
        std::cout << std::endl;

        Node *newData{new Node};

        newData->nama = nama;
        newData->alamat = alamat;
        newData->telp = telp;
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
