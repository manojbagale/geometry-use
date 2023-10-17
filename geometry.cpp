#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265359;

// Function to calculate the volume of a cube
double cubeVolume(double side) {
    return side * side * side;
}

// Function to calculate the surface area of a cube
double cubeSurfaceArea(double side) {
    return 6 * side * side;
}

// Function to calculate the volume of a sphere
double sphereVolume(double radius) {
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

// Function to calculate the surface area of a sphere
double sphereSurfaceArea(double radius) {
    return 4 * PI * pow(radius, 2);
}

// Function to calculate the volume of a cylinder
double cylinderVolume(double radius, double height) {
    return PI * pow(radius, 2) * height;
}

// Function to calculate the surface area of a cylinder
double cylinderSurfaceArea(double radius, double height) {
    return 2 * PI * radius * (radius + height);
}

// Function to calculate the volume of a cone
double coneVolume(double radius, double height) {
    return (1.0 / 3.0) * PI * pow(radius, 2) * height;
}

// Function to calculate the surface area of a cone
double coneSurfaceArea(double radius, double height) {
    double slantHeight = sqrt(pow(radius, 2) + pow(height, 2));
    return PI * radius * (radius + slantHeight);
}

int main() {
    int choice;
    cout << "Geometry Calculator" << endl;
    cout << "1. Cube" << endl;
    cout << "2. Sphere" << endl;
    cout << "3. Cylinder" << endl;
    cout << "4. Cone" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            double side;
            cout << "Enter the side length of the cube: ";
            cin >> side;
            cout << "Volume: " << cubeVolume(side) << endl;
            cout << "Surface Area: " << cubeSurfaceArea(side) << endl;
            break;

        case 2:
            double radiusSphere;
            cout << "Enter the radius of the sphere: ";
            cin >> radiusSphere;
            cout << "Volume: " << sphereVolume(radiusSphere) << endl;
            cout << "Surface Area: " << sphereSurfaceArea(radiusSphere) << endl;
            break;

        case 3:
            double radiusCylinder, heightCylinder;
            cout << "Enter the radius and height of the cylinder: ";
            cin >> radiusCylinder >> heightCylinder;
            cout << "Volume: " << cylinderVolume(radiusCylinder, heightCylinder) << endl;
            cout << "Surface Area: " << cylinderSurfaceArea(radiusCylinder, heightCylinder) << endl;
            break;

        case 4:
            double radiusCone, heightCone;
            cout << "Enter the radius and height of the cone: ";
            cin >> radiusCone >> heightCone;
            cout << "Volume: " << coneVolume(radiusCone, heightCone) << endl;
            cout << "Surface Area: " << coneSurfaceArea(radiusCone, heightCone) << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
