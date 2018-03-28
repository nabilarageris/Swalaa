#include "tubes1.h"

void createlist(list &L) {
    first(L) = NULL;
}

address alokasi(mhs mahasiswa) {
    address P;
    P = new clist;
    info(P) = mahasiswa;
    next(P) = NULL;
    return P;
}

void dealokasi(address &P) {
    delete P;
}

void printinfo(list &L) {
        if (next(first (L)) != first(L) && next(last (L)) != first (L)) {
             address P = first (L);
                while (P != last (L)) {
                    P = next (P);
                }
        }
}

void addfirst(list &L, address &P) {
    if (next(first (L)) != first(L) && next(last (L)) != first(L)) {
        next (P) = first (L);
        prev (first (L)) = P;
        first (L) = P;
    }
     else
    {
        last (L) = P;
        first (L) = P;
    }
}


void addlast(list &L, address &P) {
        if (next(first (L)) != first(L) && next(last (L)) != first(L)) {
            prev(P) = last(L);
            next(last(L)) = P;
            last(L) = P;
            next(P) = first(L);
            prev(first(L)) = P;
        }
}

void addmid(list &L, address &P) {
    address R = next(first(L));
    next(P) = next(R);
    prev(P) = R;
    prev(next(R)) = P;
    next(R) = P;
}

void deletefirst(list &L, address &P) {
    first(L) = next(first(L));
    prev(first(L)) = last(L);
    next(P) = NULL;
}

void deletemid(list &L, address &P) {
    address R = next(first(L));
    next(R) = next(P);
    prev(next(P)) = R;
    next(P) = NULL;
    prev(P) = NULL;
}

void deletelast(list &L, address &P) {
    P = last(L);
    last(L) = prev(last(L));
    next(last(L)) = first(L);
    prev(P) = NULL;
}

void searchlist(list L, mhs mahasiswa) {
    address P;
    P = first(L);
    while(P!= NULL && info(P).NIM!= mahasiswa.NIM){
        P=next(P);
    }
    return P;
}

void splitlist(list &L1, list &L2, list &L3) {
    address P;
    createlist(L2);
    createlist(L3);
        while(first(L1) != NULL) {
        deletefirst(L1,P);
        if(info(P).NIM[10] % 2 == 0) {
            addfirst(L2,P);
        }
         else
        {
            addfirst(L3,P);
        }
    }
}
