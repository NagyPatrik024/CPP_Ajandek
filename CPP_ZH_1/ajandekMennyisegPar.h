#pragma once
#include "AjandekTipus.h"
#include <cstdint>
#include <iostream>
#include <unordered_map>
class AjandekMennyisegPar
{
public: 
	AjandekMennyisegPar(EAjandekTipus ajandektipus, uint16_t db);
	friend std::ostream& operator<<(std::ostream& os, const AjandekMennyisegPar& amp);
	EAjandekTipus AjandekTipusGetter() const;

private:
	EAjandekTipus mAjandekTipus;
	uint16_t mDb;
};

