int Pass, Fail, Count, TotalMarks, Marks, average; 

extern int eof(); 
extern int get_marks(); 

int main() {    
    Pass = 0;
    Fail = 0;
    Count = 0;
    while (!eof()) {
        TotalMarks=0;
        Marks = get_marks();
        if (Marks >= 40) { Pass = Pass + 1; }
        if (Marks < 40) { Fail = Fail + 1; }
        Count = Count + 1;
        TotalMarks = TotalMarks + Marks;
    }
    int tmp = Count + Pass + Fail;
    average = TotalMarks/Count;
    return average;
}
