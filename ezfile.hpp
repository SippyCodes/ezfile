// ezfile v1
// developed by SippyCodes

#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

namespace ezfile {

    inline bool exists(const std::string& path) {
        std::ifstream in(path);
        return in.good();
    }

    inline void create_file(const std::string& path, const std::string& initial_content = "") {
        std::ofstream out(path, std::ios::trunc);
        out << initial_content;
    }

    inline std::string read_text(const std::string& path) {
        std::ifstream in(path);
        std::ostringstream ss;
        ss << in.rdbuf();
        return ss.str();
    }

    inline std::vector<std::string> read_lines(const std::string& path) {
        std::ifstream in(path);
        std::vector<std::string> lines;
        std::string line;
        while (std::getline(in, line)) lines.push_back(line);
        return lines;
    }

    inline void write_text(const std::string& path, const std::string& content) {
        std::ofstream out(path, std::ios::trunc);
        out << content;
    }

    inline void append_text(const std::string& path, const std::string& content) {
        std::ofstream out(path, std::ios::app);
        out << content;
    }

    inline void write_lines(const std::string& path, const std::vector<std::string>& lines) {
        std::ofstream out(path, std::ios::trunc);
        for (const auto& line : lines) out << line << '\n';
    }
}
