int main(){
    int scores[3];
    char StudentGrade;
    int average;
    read(scores);
    StudentGrade = grade(scores,&average);
    result(StudentGrade,average);
    return 0;
}