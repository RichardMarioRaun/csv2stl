/**
#include <iostream>
#include <fstream>
#include <thread>
#include <array>
#include <vector>
#include <string>
#include <sstream>
#include <tuple>
#include <math.h>
#include <cstdint>
#include <cstring>
#include <string.h>


struct Point {
    float x, y, z;

    Point(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
};

class Vektor {
public:
    float vx, vy, vz;
    Vektor(Point yks, Point kaks) {
        vx = kaks.x - yks.x;
        vy = kaks.y - yks.y;
        vz = kaks.z - yks.z;
    }
    Vektor(float _x, float _y, float _z) : vx(_x), vy(_y), vz(_z) {}
    Vektor(float x1, float x2, float y1, float y2, float z1, float z2){
        vx = x2 - x1;
        vy = y2 - y1;
        vz = z2 - z1;
    }
};

Vektor vektorkorutis(Vektor M, Vektor N){
    float x = M.vy * N.vz - N.vy * M.vz;
    //x = ym * zn - yn * zm
    float y = -(M.vx * N.vz - N.vx * M.vz);
    //y = -(xm * zn - xn * zm)
    float z = M.vx * N.vy - M.vy * N.vx;
    //z = xm * yn - ym * xn
    float kordaja = std::sqrt(x*x + y*y + z*z);

    x = x/kordaja;
    y = y/kordaja;
    z = z/kordaja;

    if (z > 0) {
        return Vektor(x, y, z);
    }   else {
        return Vektor(-x, -y, -z);
    };
};

class Stltriangle {
    // plaan oleks constructoriga otse genereerida ja vb ka kirjutada kohe 50byte pack faili
    //buffer tuleb teha meetodiks mis selle valjastab
private:
    Vektor normaal;
    Point a, b, c;
public:
    //kordinaadid sisestatakse XYZ (paris kordinaadid mitte index) jarjekorras tuple'is ning nendega arvutatakse kolmnurga normaal
    Stltriangle(Point sa, Point sb, Point sc) : a(sa), b(sb), c(sc), normaal(vektorkorutis(Vektor(sa, sb), Vektor(sa, sc))) {};
    std::vector<uint8_t> bindataout() {
        std::vector<uint8_t> buffer(50);
        std::vector<float> data = {normaal.vx, normaal.vy, normaal.vz, a.x, a.y, a.z, b.x, b.y, b.z, c.x, c.y, c.z};
        std::memcpy(buffer.data(), data.data(), sizeof(float) * data.size());
        buffer[48] = 0;
        buffer[49] = 0;
        return buffer;
    }
};

class FileSTLbin {
public:
    std::vector<Stltriangle> kolmnurgad;

    void binwriteout(std::string nimi){
        //genereerimie failile nime ja binaar nime
        std::stringstream failinimi;
        failinimi << nimi << ".stl";
        std::string failn = failinimi.str();

        //avame faili
        std::ofstream outFile(failn, std::ios::binary);
        if (!outFile.is_open()) {
            std::cerr << "Failed to open the file." << std::endl;}

        //valmistame headeri ja kirjutame selle faili
        std::vector<char> headerbuff(80);
        std::memcpy(headerbuff.data(), nimi.data(), nimi.size() * 8);
        for (auto i = (nimi.size()); i <= 80; i += 1){
            headerbuff[i-1] = 0;
        };
        outFile.write(reinterpret_cast<char*>(headerbuff.data()), headerbuff.size());

        //kolmnurkade arv
        int number = kolmnurgad.size();
        outFile.write(reinterpret_cast<char*>(&number), sizeof number);


        //kolmnurgad kirjutatakse sisse
        for (Stltriangle kolmnur : kolmnurgad) {
            outFile.write(reinterpret_cast<char*>(kolmnur.bindataout().data()), 50);
        }

        outFile.close();

    }
};

int main(){
    std::string failinimi;
    std::cout << "sisesta faili nimi: ";
    std::cin >> failinimi;
    FileSTLbin stlfail;
    stlfail.kolmnurgad.push_back(Stltriangle(Point(0, 0, 0), Point(50, 0, 0), Point(50, 50, 0)));
    stlfail.kolmnurgad.push_back(Stltriangle(Point(0, 0, 0), Point(0, 50, 0), Point(50, 50, 0)));
    stlfail.kolmnurgad.push_back(Stltriangle(Point(0, 0, 0), Point(50, 0, 50), Point(0, 50, 50)));
    stlfail.kolmnurgad.push_back(Stltriangle(Point(0, 0, 0), Point(0, 0, 50), Point(0, 50, 50)));
    stlfail.binwriteout(failinimi);
    return 0;
}
 **/