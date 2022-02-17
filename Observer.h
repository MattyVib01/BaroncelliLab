//
// Created by MattyVib01 on 31/01/2022.
//

#ifndef BARONCELLILAB_OBSERVER_H
#define BARONCELLILAB_OBSERVER_H
class Note;
class Subject;


class Observer {
public:
    virtual ~Observer()=default;

    virtual void updateDelete(Note& note)=0;
};


#endif //BARONCELLILAB_OBSERVER_H
