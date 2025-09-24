#include <iostream> // terminal input and output classes and objects
class GPSCoord {
private:
 double lat, lng, elv; // latitude, longitude, elevation
public:
 GPSCoord(double lat, double lng, double e=0.0): lat(lat), lng(lng), elv(e) {}
 double operator [] (int index); // access the GPS coordinates as index
};
double GPSCoord::operator [] (int index) {
 // for index 0, 1 or 2, return the latitude, longitude, or elevation
    if(index==0) return lat;
    if(index==1) return lng;
    if(index==2) return elv;
    return -1;
}
int main() {
 GPSCoord point1(1.5,2.0,5.0);
std::cout << "Latitude  : " << point1[0] << std::endl;
std::cout << "Longitude : " << point1[1] << std::endl;
std::cout << "Elevation : " << point1[2] << std::endl;
 // print out the coordinates by accessing them with the [] operator
}