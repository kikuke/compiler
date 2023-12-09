int a;
int bb(int a, int b) { // compound 닫는 중괄호가 끝났을 때 스코프가 잘못 잡힘
    int d;// 
    return a;
}

int main() {
    int c;
    a=20;
    b=20; // syntax analysis에서 잘못됨 setFunctionDeclarationSpecifier, compoundstatement
    bb(1, 2);
}