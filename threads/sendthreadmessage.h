#ifndef SENDTHREADMESSAGE_H_INCLUDED
#define SENDTHREADMESSAGE_H_INCLUDED

struct THREAD_MSG
{
    UINT uMsg;
    WPARAM wParam;
    LPARAM lParam;
    LRESULT lResult;
    HANDLE hEvent;
};

struct THREAD_MSG_INTERNALS
{
    bool bRemoteProcess;
    HANDLE hEvent;
    HANDLE hMapping;
    THREAD_MSG *lpThreadMsg;
};

#define TM_SYSTEMMESSAGE WM_APP+1

#define SELF_PROCESS_MESSAGE 0x10000
#define REMOTE_PROCESS_MESSAGE 0x20000

typedef LRESULT (CALLBACK* THREADPROC)(UINT, WPARAM, LPARAM);

#endif // SENDTHREADMESSAGE_H_INCLUDED