char
f(char **arg)
{
    while (!(*arg++));
    return **arg;
}

int
main(int argc, char **argv)
{
    char (*fp)(char **); // pointer to char (char **)
    fp = f;
    return (argc > 1)?(int)fp(argv):0;
}
