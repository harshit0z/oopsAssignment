#include <iostream>
using namespace std;

class Network {
    int packetCount;
public:
    Network():packetCount(0){}
    void sendPacket() {
        packetCount++;
        cout<<"Packet "<<packetCount<<" sent"<<endl;
    }
    void receivePacket() {
        if(packetCount>0) {
            cout<<"Packet "<<packetCount<<" received"<<endl;
            packetCount--;
        } else {
            cout<<"No packets to receive"<<endl;
        }
    }
    int getPendingPackets() { return packetCount; }
};

int main(){
    Network net;
    net.sendPacket();
    net.sendPacket();
    cout<<"Pending: "<<net.getPendingPackets()<<endl;
    net.receivePacket();
    net.receivePacket();
    net.receivePacket();
    cout<<"Pending: "<<net.getPendingPackets()<<endl;
    return 0;
}