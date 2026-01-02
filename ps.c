//
// Created by dshamia on 1/2/26.
//
#include "types.h"
#include "stat.h"
#include "user.h"
//TODO dshamia prio1 implement
int
main(int argc, char *argv[])
{
    int n = getNumProc();
    int max = getMaxPid();

    printf(1, "ps (phase1 stub): getNumProc=%d getMaxPid=%d\n", n, max);
    exit();
}
