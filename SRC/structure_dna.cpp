//
// Created by y on 7/5/20.
//

#include "structure_dna.h"

std::map<IdDna, DnaMetaData*>& StructureDna::getIdStructure() {
    static std::map<IdDna,DnaMetaData*> idStructure;
    return idStructure;
}

std::map<NameDna, DnaMetaData*>& StructureDna::getNameStructure() {
    static std::map<NameDna,DnaMetaData*> nameStructure;
    return nameStructure;
}
