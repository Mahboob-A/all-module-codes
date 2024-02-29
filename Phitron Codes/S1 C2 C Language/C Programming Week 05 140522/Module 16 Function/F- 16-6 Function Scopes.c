
        /// 16-6 Function Scopes (Also learn about
        /// global and static variable

    #include <stdio.h>
    int makeDouble (int x) {
        return x*2;
    }
    int main () {
        int n;
        scanf ("%d", &n);

        n = makeDouble(n);
        printf("%d", n);



    }


    #include <stdio.h>
    void makeDouble (int x) {
         x*=2;  // ata ke return korte hobe , look previous code
    }
                        // ai program ta vul ache
                        // void dile kono kichu retun hoy na
                        // kintu abar main a function ke call kora hoyeche
                        // makeDouble(a) ai vave na, kon var e makeDouble(a)
                        // er value rakhte chacchi seta likhte hobe
                        // hok seta a nijei ba onno kono var
                        // tai a = makeDouble(a) ai vab ehobe o void na hoye
                        // in t ba double dt hobe
                        // and look 22 no line now
    int main () {
        int a = 10;
        makeDouble(a);
        printf("%d", a);
    }
