//
// Created by y on 7/6/20.
//

#ifndef DNA_DUP_CMD_H
#define DNA_DUP_CMD_H

#include "creation_command.h"

class DupCmd: public CreationCmd{
public:
    /*virtual*/ ~DupCmd() {}
    /*virtual*/ void createCMD(const Parser& params) ;
    /*virtual*/ void run(const Parser& params, StructureDna& dnaStructure ,IReader& input ,IWriter& output);

private:
    void printAfterCommand(StructureDna& dnaStructure ,IWriter& output)const ;
    bool isValid(const Parser& params);
    void getNameById(const Parser &params, StructureDna& dnaStructure);
    void getNameByName(const Parser &params, StructureDna& dnaStructure );
    };

#endif //DNA_DUP_CMD_H
