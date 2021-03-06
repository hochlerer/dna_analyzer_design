//
// Created by y on 7/5/20.
//

#ifndef DNA_META_DATA_DNA_H
#define DNA_META_DATA_DNA_H
#include "dna_sequence.h"


class DnaMetaData{
public:
    explicit DnaMetaData(const DnaSequence& dnaSeq, const std::string& name, const std::string& status):
                m_dna(new DnaSequence(dnaSeq)), m_idDna(s_lastId), m_nameDna(name), m_statusDna(status) , m_counter(0){++s_lastId;}

    DnaMetaData(const DnaMetaData& other);
    ~DnaMetaData();
    static size_t getLastId() {return s_lastId-1;}

    size_t getId()const {return m_idDna;}
    std::string getName()const {return m_nameDna;}
    void setName(std::string newName);
    std::string getStatus()const {return m_statusDna;}
    const DnaSequence* getDnaSeq()const {return m_dna;}
    size_t getCounter()const {return m_counter;}
    void increaseCounter(){++m_counter;}

private:
    static size_t s_lastId;
    size_t m_idDna;
    DnaSequence* m_dna;
    std::string m_nameDna;
    std::string m_statusDna;
    size_t m_counter;
};

#endif //DNA_META_DATA_DNA_H
