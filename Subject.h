//
// Created by MattyVib01 on 31/01/2022.
//

#ifndef BARONCELLILAB_SUBJECT_H
#define BARONCELLILAB_SUBJECT_H
#include "Observer.h"


class Subject {
public:
    virtual ~Subject()=default;
    virtual void notify()=0;

    virtual void subscribe(Observer *o)=0;
    virtual void unsubscribe(Observer* o)=0;


};


#endif //BARONCELLILAB_SUBJECT_H
