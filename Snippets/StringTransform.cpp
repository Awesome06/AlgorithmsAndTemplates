//Transfrom string to Upper/Lower Case
//Upper
transform(all(s), s.begin(), ::toupper);
//Lower
transform(all(s), s.begin(), ::tolower);
