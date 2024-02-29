


            /// Q4 Function of both void foo and bar function
            // 170622 08.46 am

     /*
    Make a function named foo() which prints “foo\n” and a
    function named bar() which prints “bar\n”. Call function foo()
    in the main() function and call function bar() in the foo()
    function after printing. What will be the output?
    */

    #include <stdio.h>
    void foo(void)
    {
        printf("foo\\n");
        //printf("\n");

        bar();
    }

    void bar(void)
    {
        printf("bar\\n");
    }

    int main () {
        foo();
        //foo(bar());

    }
