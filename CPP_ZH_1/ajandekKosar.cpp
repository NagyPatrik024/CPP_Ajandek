#include "ajandekKosar.h"

AjandekKosar::AjandekKosar(std::string kosarneve)
	:mKosarneve(kosarneve)
{
	mAjandekok = std::vector<AjandekMennyisegPar>();
}

void AjandekKosar::UjAjandek(AjandekMennyisegPar ajandekmennyisegpar)
{
	mAjandekok.push_back(ajandekmennyisegpar);
}

std::string AjandekKosar::KosarNeveGetter() const
{
	return mKosarneve;
}

std::vector<AjandekMennyisegPar> AjandekKosar::AjandekokGetter() const
{
	return mAjandekok;
}

std::ostream& operator<<(std::ostream& os, const AjandekKosar& kos)
{
	os << kos.KosarNeveGetter() << std::endl;
	for (const auto& item : kos.mAjandekok)
	{
		os << item;
	}
	return os;
}
