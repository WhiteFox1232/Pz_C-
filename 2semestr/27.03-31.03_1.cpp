#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string input_values;
    std::getline(std::cin, input_values);
    std::string input_template;
    std::getline(std::cin, input_template);

    //пари "ім'я=значення" з першого рядка
    std::unordered_map<std::string, std::string> value_map;
    std::string delimiter = ",";
    size_t pos = 0;
    while ((pos = input_values.find(delimiter)) != std::string::npos) {
        std::string pair = input_values.substr(0, pos);
        size_t equal_pos = pair.find('=');
        if (equal_pos != std::string::npos) {
            std::string name = pair.substr(0, equal_pos);
            std::string value = pair.substr(equal_pos + 1);
            value_map[name] = value;
        }
        input_values.erase(0, pos + delimiter.length());
    }
    // Остання пара
    size_t equal_pos = input_values.find('=');
    if (equal_pos != std::string::npos) {
        std::string name = input_values.substr(0, equal_pos);
        std::string value = input_values.substr(equal_pos + 1);
        value_map[name] = value;
    }

    // Замінити плейсхолдери у другому рядку значеннями
    std::string placeholder_start = "[";
    std::string placeholder_end = "]";
    std::string result = input_template;
    pos = 0;
    while ((pos = result.find(placeholder_start, pos)) != std::string::npos) {
        size_t end_pos = result.find(placeholder_end, pos + placeholder_start.length());
        if (end_pos != std::string::npos) {
            std::string placeholder = result.substr(pos + placeholder_start.length(), end_pos - pos - placeholder_start.length());
            if (value_map.find(placeholder) != value_map.end()) {
                result.replace(pos, end_pos - pos + placeholder_end.length(), value_map[placeholder]);
            }
            else {
                pos = end_pos + placeholder_end.length();
            }
        }
        else {
            break;
        }
    }

    std::cout << result << std::endl;

    return 0;
}