#ifndef XV6_PUBLIC_PROCESSINFO_H
#define XV6_PUBLIC_PROCESSINFO_H
#endif //XV6_PUBLIC_PROCESSINFO_H

struct processInfo {
    int state;
    int ppid;
    int sz;
    int nfd;
    int nrswitch;
};
