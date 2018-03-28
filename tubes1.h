#ifndef TUBES1_H_INCLUDED
#define TUBES1_H_INCLUDED

#include <stdlib.h>

#define info(P) P -> info
#define next(P) P -> next
#define prev(P) P -> prev
#define first(L) ((L).first)
#define last(L) ((L).last)

using namespace std;

typedef struct mhs {
            char NIM[10];
            char Nama[30];
            int  IPK;
            char NmAyah[30];
            char NmIbu[30];
            char KMK[10];
            char NMK[10];
            char  Sem[2];
            float Nilai;
}

typedef struct list address;
struct list {
            address prev;
            mhs info;
            address next;
}

struct list {
    address first;
    address last;
}

void createlist(list &L);
    allocate_shared(mhs mahasiswa);

void dealokasi(address &P);
void addfirst(list &L, address &P);
void addlast(list &L, address &P);
void addmid(list &L, address &P);
void printinfo(list &L);
void deletefirst(list &L, address &P);
void deletemid(list &L, address &P);
void deletelast(list &L, address &P);
void searchlist(list L, mhs mahasiswa);
void splitlist(list &L1, list &L2, list &L3);

#endif TUBES1_H_INCLUDED
