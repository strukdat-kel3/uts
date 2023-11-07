#include "pekerjaan.h"

int main()
{
    auto *head{new pekerjaan::Node};
    pekerjaan::init(head);
    pekerjaan::append(head);
    pekerjaan::view(head);
    return 0;
}