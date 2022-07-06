//
// Purpur Tentakel
// 04.07.2022
//

#pragma once
#include <string>


class Log {
public:
	enum LogLevel : unsigned char {
		LevelError,
		LevelWarning,
		LevelInfo
	};

private:
	LogLevel m_LogLevel = LevelInfo;

public:
	void SetLevel(LogLevel Level);
	void Error(const std::string& message) const;
	void Warn(const std::string& message) const;
	void Info(const std::string& message) const;
};