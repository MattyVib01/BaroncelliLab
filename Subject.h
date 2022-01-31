//
// Created by MattyVib01 on 31/01/2022.
//

#ifndef BARONCELLILAB_SUBJECT_H
#define BARONCELLILAB_SUBJECT_H
#include "Observer.h"


class Subject {
public:
    virtual ~Subject();
    virtual void notify();

    virtual void subscribe(Observer *o);
    virtual void unsubscribe(Observer* o);


};


#endif //BARONCELLILAB_SUBJECT_H
