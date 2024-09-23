#include <iostream>
#include "Laptop.h"

using namespace std;

int main() 
{
    CPU cpu("Intel Core i7", 8);
    SSD ssd(512);
    VideoCard videoCard("NVIDIA RTX 3060", 6);
    RAM ram(16);

    Laptop laptop("MyLaptop", 1500.0, "Silver", cpu, ssd, videoCard, ram);

    cout << "Laptop name: " << laptop.getName() << endl;
    cout << "Laptop price: " << laptop.getPrice() << endl;
    cout << "Laptop color: " << laptop.getColor() << endl;
    cout << "CPU: " << laptop.getCpu().getModel() << ", Cores: " << laptop.getCpu().getCores() << endl;
    cout << "SSD capacity: " << laptop.getSsd().getCapacity() << " GB" << endl;
    cout << "Video card: " << laptop.getVideoCard().getModel() << ", VRAM: " << laptop.getVideoCard().getVram() << " GB" << endl;
    cout << "RAM size: " << laptop.getRam().getSize() << " GB" << endl;
    cout << "Number of laptops created: " << Laptop::getLaptopCount() << endl;

    return 0;
}