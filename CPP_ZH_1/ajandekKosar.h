#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "ajandekMennyisegPar.h"
class AjandekKosar
{
public:
	AjandekKosar(std::string kosarneve);
	AjandekKosar() = default;
	void UjAjandek(AjandekMennyisegPar ajandekmennyisegpar);
	std::string KosarNeveGetter() const;
	std::vector<AjandekMennyisegPar> AjandekokGetter() const;
	friend std::ostream& operator<<(std::ostream& os, const AjandekKosar& kos);
private:
	std::string mKosarneve;
	std::vector<AjandekMennyisegPar> mAjandekok;

};

