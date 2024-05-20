#include <iostream>
using namespace std;

class Mahasiswa {
private:
    const int id;
    string nama;
    float nilai;

public:
    Mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai)
    {
        // Member Initialization List
        // Definisi
    }

    ~Mahasiswa() 
    {
        cout << "Id    = " << id << endl;
        cout << "Nama  = " << id << endl;
        cout << "Nilai = " << id << endl;
    }
};

