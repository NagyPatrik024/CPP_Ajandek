#include "ajandekMennyisegPar.h"

AjandekMennyisegPar::AjandekMennyisegPar(EAjandekTipus ajandektipus, uint16_t db)
	:mAjandekTipus(ajandektipus),
	mDb(db)
{
}

EAjandekTipus AjandekMennyisegPar::AjandekTipusGetter() const
{
	return mAjandekTipus;
}

std::ostream& operator<<(std::ostream& os, const AjandekMennyisegPar& amp)
{
	os << AjandekTipus::AjandekEnumToString.find(amp.mAjandekTipus)->second << "(" << amp.mDb << ")" << std::endl;
	return os;
}
