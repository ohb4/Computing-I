#include <iostream>

using namespace std;

float computeMass(float force, float acceleration);//decleration for both functions
float computeAcceleration(float force, float mass);

int main()
{
    float f;//decleration for the variables used f = force, m = mass, a = acceleration
    float m;
    float a;

    //takes in numbers for the first function
    cout << "Enter force and acceleration: \n";
    cout << "Force: "; 
    cin >> f;
    cout << "Acceleration: "; 
    cin >> a;
    cout << "\n\n";

    // reveals the result for the first function
    cout << "The Mass = " << computeMass(f,a) << "\n\n";

    //takes in numbers for the second function
    cout << "Enter force and mass: \n";
    cout << "Force: "; 
    cin >> f;
    cout << "Mass: "; 
    cin >> m;
    cout << "\n\n";

    // reveals the result for the second function
    cout << "The Acceleration = " << computeAcceleration(f,m) << "\n\n";

    return 0;
}

// function to compute mass
float computeMass(float force, float acceleration)
{
    float mass;

    //equation for calculating mass
    mass = force / acceleration;

    //returns mass
    return mass;
}

// function to compute acceleration
float computeAcceleration(float force, float mass)
{
    float acceleration;

    //equation for calculating acceleration
    acceleration = force / mass;

    //returns acceleration
    return acceleration;
}