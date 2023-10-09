bool compare(std::string s1, std::string s2) {
    if (std::count(s1.begin(), s1.end(), '1') > std::count(s2.begin(), s2.end(), '1'))
        return true;
    if (std::count(s1.begin(), s1.end(), '1') == std::count(s2.begin(), s2.end(), '1'))
        return stoi(s1) < stoi(s2);

    return false;
}
