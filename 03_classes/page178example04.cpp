#include <iostream> // terminal input and output classes and objects
#include <string>
class GPSCoord {
    private:
        double lat, lng, elv; // latitude, longitude, elevation
    public:
        // std::string type;
        GPSCoord(double lat, double lng, double e=0.0): lat(lat), lng(lng), elv(e) {}
operator std::string() {
// convert the three attributes to a string
 return "Latitude: "+ std::to_string(lat) + ", Longitude: "+ std::to_string(lng) +", Elevation: " +std::to_string(elv);

}
bool operator == (GPSCoord & obj) {
// test whether two objects have same latitude and longitude
return (lat==obj.lat && lng == obj.lng);
}
};
int main() {
GPSCoord point1(1.0,2.0,3.0), point2(1.0,2.0,4.0);
 std::cout << std::string(point1) << std::endl;
    std::cout << std::string(point2) << std::endl;

    if (point1 == point2) {
        std::cout << "The points overlap (same latitude and longitude)." << std::endl;
    } else {
        std::cout << "The points do NOT overlap." << std::endl;
    }

    return 0;

// print out both points, and whether they overlap with the == operator
}