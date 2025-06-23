#include <iostream>
using namespace std;

// Struktur data mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
};

// Node untuk single linked list
struct Node {
    Mahasiswa data;
    Node* next;
};

// Pointer head untuk awal linked list
Node* head = nullptr;
