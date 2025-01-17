#pragma once

#include <QObject>
#include <iostream>
#include <sstream>
#include "player.hpp"

class Field : public QObject
{
protected:
    bool permeable;
    Field *top,*right,*left,*bottom;
    unsigned int id,x,y;

public:
    Field(){}
    Field(unsigned int id, unsigned int x,unsigned int y)
    {
        this->x=x;
        this->y=y;
        this->id=id;
        std::stringstream ss;
        ss<<id;
        std::string stringid;
        ss>>stringid;
    }
    void SetNeighbours(Field *top, Field *left, Field *right, Field *bottom)
    {
        this->top=top;
        this->left=left;
        this->right=right;
        this->bottom=bottom;
    }
    void Save(std::ostream &o)
    {
        o<<x<<" "<<y<<" "<<id<<std::endl;
    }
    void Load();
    void Enter(Player *player);
    void Exit(Player *player);
};
