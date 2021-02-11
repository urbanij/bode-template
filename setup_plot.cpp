/// g++ setup_plot.cpp -O3 -std=c++2a -lfmt && a.out # [this](https://fmt.dev/) is required

#include <iostream>
#include <fstream>
#include <string>
#include <fmt/core.h>

#define TEMPLATE_FILE "semilog_templ.tikz"
#define OUT_FILE "semilog.tikz"

std::string readFile(const char* filename) {
    std::string ans;
    std::string line;
    std::ifstream myfile(filename);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            ans += line + '\n';
        }
        myfile.close();
    }
    else {
        std::cout << "Unable to open file"; 
    }
    return ans;
}

int writeToFile(const char* filename, const std::string content) {
    std::ofstream myfile;
    myfile.open(filename);
    myfile << content;
    myfile.close(); 
    std::cout << fmt::format("{} correctly overwritten.\n", filename);
    return 0;
}

int main() {
    int num_decades = 9;
    int num_vertical_steps = 90;

    std::cout << "num_decades? [default 9] ";
    std::cin >> num_decades;
    std::cout << "num_vertical_steps? [default 90] ";
    std::cin >> num_vertical_steps;

    std::string tikzpic_templ_code = readFile(TEMPLATE_FILE);
    
    std::string content = fmt::format(tikzpic_templ_code, num_decades-2, num_vertical_steps-40);
    writeToFile(OUT_FILE, content);
    
    return 0;
}
