#include <iostream>

using namespace std;

float computeMass(float force, float acceleration);
float computeAcceleration(float force, float mass);

int main()
{
    float f;
    float m;
    float a;

    cout << "Enter force and acceleration: \n";
    cout << "Force: "; 
    cin >> f;
    cout << "Acceleration: "; 
    cin >> a;
    cout << "\n\n";

    cout << "The Mass = " << computeMass(f,a) << "\n\n";

    cout << "Enter force and mass: \n";
    cout << "Force: "; 
    cin >> f;
    cout << "Mass: "; 
    cin >> m;
    cout << "\n\n";

    cout << "The Acceleration = " << computeAcceleration(f,m) << "\n\n";
}

float computeMass(float force, float acceleration)
{
    float mass;

    mass = force / acceleration;

    return mass;
}

float computeAcceleration(float force, float mass)
{
    float acceleration;

    acceleration = force / mass;

    return acceleration;
}