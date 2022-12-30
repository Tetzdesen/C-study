#include <stdio.h>

typedef struct tLatLong
{
    float latitude, longitude;
}LatLong;

int main(void){
    LatLong latlong;
    latlong.latitude = -75.00;
    latlong.longitude = -15.00;
    printf("Latitude: %f \nLongitude: %f\n", latlong.latitude, latlong.longitude);
}