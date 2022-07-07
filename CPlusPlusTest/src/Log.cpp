//
// Purpur Tentakel
// 04.07.2022
//

#include "../hed/Log.h"
#include "../hed/Helper.h"
#include <format>

// Log
void Log::SetLevel(const LogLevel level) {
	mLogLevel = level;
}
void Log::Error(const std::string& message) const {
	if (mLogLevel < LevelError) {
		return;
	}

	std::string toPrint = std::format("  [ERROR] -> {}", message);
	Print(toPrint);
}
void Log::Warn(const std::string& message) const {
	if (mLogLevel < LevelWarning) {
		return;
	}

	std::string toPrint = std::format("[WARNING] -> {}", message);
	Print(toPrint);
}
void Log::Info(const std::string& message) const {
	if (mLogLevel < LevelInfo) {
		return;
	}

	std::string toPrint = std::format("   [Info] -> {}", message);
	Print(toPrint);
}