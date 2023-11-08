#include "data-structure/customer.h"
#include "data-structure/kendaraan.h"
#include "data-structure/pekerjaan.h"

int main()
{
    auto *customerHead{new customer::Node};
    auto *vehicleHead{new kendaraan::Node};
    auto *jobHead{new pekerjaan::Node};

    customer::init(customerHead);
    customer::view(customerHead);

    customer::append(customerHead);
    customer::view(customerHead);

    kendaraan::init(vehicleHead);
    kendaraan::view(vehicleHead);

    kendaraan::append(vehicleHead);
    kendaraan::view(vehicleHead);

    pekerjaan::init(jobHead);
    pekerjaan::view(jobHead);

    pekerjaan::append(jobHead);
    pekerjaan::view(jobHead);

    return 0;
}