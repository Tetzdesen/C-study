#include <stdio.h>

typedef struct tLatLong
{
    float latitude, longitude;
}LatLong;

int main(void){
    LatLong latlong;
    printf("Digite sua latitude: ");
    scanf("%f", &latlong.latitude);
    printf("Digite sua longitude: ");
    scanf("%f", &latlong.longitude);
   
    printf("Latitude: %f \nLongitude: %f\n", latlong.latitude, latlong.longitude);
}