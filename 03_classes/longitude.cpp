#include <iostream>

class GPSCoord {
private:
    double lat, lng, elv;

public:
    std::string type;  // Allowed, no need to include <string>

    GPSCoord(double lat, double lng, double e = 0.0) : lat(lat), lng(lng), elv(e) {}

    // Convert object to string manually using std::string and +
    std::string toString() {
        return "Latitude: " + std::to_string(lat) +
               ", Longitude: " + std::to_string(lng) +
               ", Elevation: " + std::to_string(elv);
    }

    bool operator==(const GPSCoord& obj) {
        return (lat == obj.lat && lng == obj.lng);
    }
};

int main() {
    GPSCoord point1(1.0, 2.0, 3.0);
    GPSCoord point2(1.0, 2.0, 4.0);

    std::cout << point1.toString() << std::endl;
    std::cout << point2.toString() << std::endl;

    if (point1 == point2) {
        std::cout << "The points overlap (same latitude and longitude)." << std::endl;
    } else {
        std::cout << "The points do NOT overlap." << std::endl;
    }

    return 0;
}
