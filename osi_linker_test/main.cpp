#include <stdio.h>

#include "osi/osi_sensorview.pb.h"

int main()
{
    printf("osi link test");

    osi3::CameraSensorView csv;
    const std::string img = csv.image_data();

    return 0;
}