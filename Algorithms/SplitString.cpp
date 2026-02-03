//Split using custom delimiter Char
vector<string> split(string str, char delimiter) {
    stringstream ss(str);
    vector<string> res;
    string token;
    while (getline(ss, token, delimiter)) res.pb(token);
    return res;
}

//Split using custom delimiter String
vector<string> split(string str, string delimiter) {
    vector<string> v;
    if (!str.empty()) {
        int start = 0;
        do {
            int idx = str.find(delimiter, start);
            if (idx == string::npos) break;
            int length = idx - start;
            v.pb(str.substr(start, length));
            start += (length + delimiter.size());
        } while (true);
        v.pb(str.substr(start));
    }
    return v;
}
