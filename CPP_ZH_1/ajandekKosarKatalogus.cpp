#include "ajandekKosarKatalogus.h"
#include <fstream>
#include <sstream> 

AjandekKosarKatalogus::AjandekKosarKatalogus()
{
	mKosarak = std::vector<AjandekKosar>();
}

void AjandekKosarKatalogus::UjAjandekKosar(AjandekKosar kosar)
{
	mKosarak.push_back(kosar);
}



AjandekKosar& AjandekKosarKatalogus::Keres(std::string kosarneve)
{
	for (auto& kosar : mKosarak)
	{
		if (kosar.KosarNeveGetter() == kosarneve)
		{
			return kosar;
		}
	}
	throw std::exception("Kosar nem talalhato");
}

void AjandekKosarKatalogus::Beolvas(std::string path)
{
	std::ifstream inputFile(path);
	AjandekKosar ak("asd");
	while (!inputFile.eof())
	{
		std::string line;
		std::getline(inputFile, line);

		if (line.find("(") == std::string::npos)
		{
			if (ak.KosarNeveGetter() != "asd")
			{
				UjAjandekKosar(ak);
			}
			ak = AjandekKosar(line);
		}
		else
		{
			auto pos = line.find("(");
			std::string nev = line.substr(0, pos);
			line = line.substr(0 + pos);
			pos = line.find(")");
			uint16_t db = stoi(line.substr(1, pos));
			std::unordered_map<std::string, EAjandekTipus>::const_iterator got = AjandekTipus::StringToAjandekEnum.find(nev);
			AjandekMennyisegPar amp(got->second, db);
			ak.UjAjandek(amp);
		}

	}

}

std::vector<AjandekKosar> AjandekKosarKatalogus::melyikTartalmaz(std::string ajandektipus) const
{
	std::vector<AjandekKosar> kosarak = std::vector<AjandekKosar>();
	bool helper = false;
	for (const auto& kosar : mKosarak)
	{
		helper = false;
		for (const auto& ajandek : kosar.AjandekokGetter())
		{
			if (ajandektipus == (AjandekTipus::AjandekEnumToString.find(ajandek.AjandekTipusGetter())->second))
			{
				helper = true;
			}
		}
		if (helper)
		{
			kosarak.emplace_back(kosar);
		}
	}
	return kosarak;
}

std::ostream& operator<<(std::ostream& os, const AjandekKosarKatalogus& kat)
{
	for (const auto& item : kat.mKosarak)
	{
		os << item;
	}
	return os;
}
