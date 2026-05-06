#include <iostream>
using namespace std;

// Engine class (contained class)
class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }

    void stop() {
        cout << "Engine stopped" << endl;
    }
};

// Car class (container / owner class)
class Car {
private:
    Engine e;   // Car "HAS-A" Engine (composition)

public:
    void startCar() {
        e.start();
        cout << "Car is running" << endl;
    }

    void stopCar() {
        e.stop();
        cout << "Car stopped" << endl;
    }
};

int main() {
    Car c;

    c.startCar();
    c.stopCar();

    return 0;
}