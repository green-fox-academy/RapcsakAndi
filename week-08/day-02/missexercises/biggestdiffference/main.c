#include <stdio.h>
#include <stdlib.h>

// You will write a program that keeps track of exam results.
// First, your program should ask the user how many classes took the exam. Let's say this number is N.
// Then you need to ask how many students took the exam in the first class. Let's say this number is M.
// You need to ask for the name of the class, the the exam results in percentage M times and store them.
// The number of students might be different for each class.
// You need to repeat this N times.
// Make sure you have a separate function that reads the data and returns it.

// Once you have the data write functions for the following questions:
// Which class has the biggest difference between the worst and best exam and how much is the difference?
// Which class has the best exam?
// What is the average of all the exams?

typedef struct class{
    char name[50];
    int student_number;
    int *studentts_exam_percentiles;
}class_t;

char* fill_class_name(class_t* classes, int class_size){
    printf("Enter the %d class's name: ", class_size);
    for (int i = 0; i < class_size; ++i) {
        scanf("%s",classes[i].name);
    }
    return classes->name;
}
int students_who_took_the_exam(class_t* classes, int class_size){
    printf("Enter how many students took the exam in the %d classes separately: ", class_size);
    for (int i = 0; i < class_size; ++i) {
        scanf("%d",&classes[i].student_number);
    }
    return classes->student_number;
}
int exam_results(class_t* classes, int class_size){
    for (int i = 0; i <class_size; ++i) {
        printf("szia: %d",classes[i].student_number);
        printf("Enter the result of the student's exams in the class%d: ",i+1);
        classes[i].studentts_exam_percentiles = (int*) calloc(classes[i].student_number, sizeof(int));
        for (int j = 0; j < classes[i].student_number; ++j) {

            scanf("%d", &classes[i].studentts_exam_percentiles[j]);
        }
    }
    return *classes->studentts_exam_percentiles;
}
void find_min_max(class_t* classes, int class_size){
    int j = 0;
    int i = 0;
    int min = classes[i].studentts_exam_percentiles[0];
    int max = 0;
    int differenc = 0;
    char *biggest_differenc_class_name = "";

    for ( i = 0; i < class_size; ++i) {
        int actual_min = classes[i].studentts_exam_percentiles[0];
        int actual_max = 0;
        int actual_differenc = 0;
        for ( j = 0; j <classes[i].student_number ; ++j) {
            if(classes[i].studentts_exam_percentiles[j]> actual_max)
                actual_max = classes[i].studentts_exam_percentiles[j];
            if(classes[i].studentts_exam_percentiles[j]<actual_min)
                actual_min = classes[i].studentts_exam_percentiles[j];

        } actual_differenc = actual_max - actual_min;

        if(actual_differenc>differenc){
            differenc = actual_differenc;
             biggest_differenc_class_name = classes[i].name;
         }
    }
    printf("biggest difference: %d\n", differenc);
    printf("biggest difference class name: %s\n",biggest_differenc_class_name);
}

char* best_exam(class_t* classes, int class_size){
    char* best_class_name;
    int max = 0;
    for (int i = 0; i <class_size ; ++i) {
        for (int j = 0; j <classes[i].student_number ; ++j) {
            if(classes[i].studentts_exam_percentiles[j] > max) {
                max = classes[i].studentts_exam_percentiles[j];
                best_class_name = classes[i].name;
            }
        }
    }
    return best_class_name;
}

float average_all_the_exam(class_t* classes, int class_size){
    float average_result = 0;
    int all_of_students = 0;
    for (int i = 0; i < class_size; ++i) {
        for (int j = 0; j < classes[i].student_number; ++j) {
            average_result += classes[i].studentts_exam_percentiles[j];
            all_of_students++;
        }

    }

    return average_result/all_of_students;
}

int main()
{
    int class_number;
    printf("Enter how many classes took the exam: ");
    scanf("%d",&class_number);

    class_t* classes;
    classes = (class_t*) calloc(class_number, sizeof(class_t));
    fill_class_name(classes, class_number);
    students_who_took_the_exam(classes, class_number);
    exam_results(classes, class_number);

    for (int i = 0; i <class_number; ++i) {
        printf("class name: %s\n ", classes[i].name);
        printf("class members number: %d\n ", classes[i].student_number);
        for (int j = 0; j <classes[i].student_number ; ++j) {
             printf("percentiles%d: %d ",j+1, classes[i].studentts_exam_percentiles[j]);
        }
        printf("\n");
    }

    find_min_max(classes, class_number);
    char* best = best_exam(classes, class_number);
    printf("best class: %s\n",best);
    float average = average_all_the_exam(classes, class_number);
    printf("average exam result: %.2f",average);

    for (int k = 0; k <class_number; ++k) {
        free(classes[k].studentts_exam_percentiles);
    }

    free(classes);
    return 0;
}