#ifndef PERSONSERVICE_H
#define PERSONSERVICE_H

#include <vector>
#include "person.h"
#include "dataaccess.h"

class PersonService
{
public:
    PersonService();

    vector<Person> getPersons(/* TODO: params, search, sort*/);
    void addPerson(Person newPerson);
private:
    DataAccess _dataAccess;
};

#endif // PERSONSERVICE_H