//
// Purpur Tentakel
// 04.07.2022
//

#include "../hed/Log.h"
#include "../hed/Helper.h"
#include <format>

void Log::SetLevel(const LogLevel level) {
	m_LogLevel = level;
}
void Log::Error(const std::string& message) const {
	if (m_LogLevel < LevelError) {
		return;
	}

	std::string toPrint = std::format("  [ERROR] -> {}", message);
	Print(toPrint);
}
void Log::Warn(const std::string& message) const {
	if (m_LogLevel < LevelWarning) {
		return;
	}

	std::string toPrint = std::format("[WARNING] -> {}", message);
	Print(toPrint);
}
void Log::Info(const std::string& message) const {
	if (m_LogLevel < LevelInfo) {
		return;
	}

	std::string toPrint = std::format("   [Info] -> {}", message);
	Print(toPrint);
}