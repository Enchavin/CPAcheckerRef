int main() {
    int a = foo();
    int b = bar(a);

    assert(a == b);
}