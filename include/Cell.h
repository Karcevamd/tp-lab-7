//  Copyright 2021 Kartseva Masha
#pragma once
#define INCLUDE_CELL_H
#ifdef INCLUDE_CELL_H
#include "../include/common.h"
#include "../include/object.h"
#include "../include/ocean.h"
class Ocean;
class Cell {
    friend Ocean;
 private:
    Pair crd;
    Object* obj = nullptr;
    Ocean* ocean;
 public:
    explicit Cell(Pair p = { 0, 0 }, Ocean* oc = nullptr) :
        crd(p),
        obj(nullptr),
        ocean(oc) {}
    void init(Pair p, Ocean* oc);
    void setObject(Object* obj);
    void killMe();
    void Moving();
    Object* getObject() const;
    Pair  Cord();
    Ocean* getOcean();
    Cell* RADAR();
    Cell* FREE();
};
#endif  // INCLUDE_CELL_H
