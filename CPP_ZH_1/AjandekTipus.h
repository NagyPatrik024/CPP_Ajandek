#pragma once
#include <unordered_map>

enum class EAjandekTipus { kave, bor, pezsgo, csokolade, desszert, kezkrem, tusfurdo };

class AjandekTipus
{
public:
	static const std::unordered_map<std::string, EAjandekTipus> StringToAjandekEnum;
	static const std::unordered_map<EAjandekTipus, std::string> AjandekEnumToString;
};


