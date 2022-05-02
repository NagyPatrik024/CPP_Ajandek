#include "AjandekTipus.h"


const std::unordered_map<std::string, EAjandekTipus> AjandekTipus::StringToAjandekEnum = {
{"Kave", EAjandekTipus::kave},
{"Bor", EAjandekTipus::bor},
{"Pezsgo", EAjandekTipus::pezsgo},
{"Csokolade",EAjandekTipus::csokolade},
{"Desszert",EAjandekTipus::desszert},
{"Kezkrem", EAjandekTipus::kezkrem},
{"Tusfurdo", EAjandekTipus::tusfurdo},
};

const std::unordered_map<EAjandekTipus, std::string> AjandekTipus::AjandekEnumToString = {
{EAjandekTipus::kave,"Kave"},
{EAjandekTipus::bor,"Bor" },
{EAjandekTipus::pezsgo,"Pezsgo" },
{EAjandekTipus::csokolade,"Csokolade"},
{EAjandekTipus::desszert,"Desszert"},
{EAjandekTipus::kezkrem,"Kezkrem" },
{EAjandekTipus::tusfurdo,"Tusfurdo"}
};
