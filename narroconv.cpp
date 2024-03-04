int main() {
    int i {2147483647};
    int j =2147483648;
    int l {2147483648};
    //la nouvelle manière d'intialiser permet d'éviter la narrowing ou du moins on nous prévient
    int k {2147483647 +1}
}