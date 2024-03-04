static int i=11;
// static fait que le i est caché, il est locala au fichier file1.cpp, il ne peut
// pas être sorti
float foo(float f) {
    return f*i;
}