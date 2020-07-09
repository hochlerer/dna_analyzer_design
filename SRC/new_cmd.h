//
// Created by y on 7/5/20.
//

#ifndef DNA_NEW_CMD_H
#define DNA_NEW_CMD_H

#include "creation_command.h"


class NewCmd: public CreationCmd{
public:
    NewCmd(const Parser& params);
    /*virtual*/ void run(const Parser& params, StructureDna& dnaStructure ,IWriter& output);

private:
    void printAfterCommand(StructureDna& dnaStructure ,IWriter& output)const ;
    bool isValid(const Parser& params);
};

#endif //DNA_NEW_CMD_H