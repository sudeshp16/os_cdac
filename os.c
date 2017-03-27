const int NoofRegisters 32;

struct SaveArea
{
int ia;
int psw;
int base;
int bound;
int reg[NoofRegisters];
};
enum ProcessState { Running,Ready,waiting};
struct ProcessDescriptor
{

int slot_allocated;
int time_left;
ProcessState state;
struct SaveArea sa;
};
