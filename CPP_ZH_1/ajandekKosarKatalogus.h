#pragma once
#include "ajandekKosar.h"
#include <vector>
#include <unordered_map>

class AjandekKosarKatalogus
{
public:
	AjandekKosarKatalogus();
	void UjAjandekKosar(AjandekKosar kosar);
	AjandekKosar& Keres(std::string kosarneve);
	void Beolvas(std::string path);
	friend std::ostream& operator<<(std::ostream& os, const AjandekKosarKatalogus& kat);
	std::vector<AjandekKosar> melyikTartalmaz(std::string ajandektipus) const;
private:
	std::vector<AjandekKosar> mKosarak;
	
};

