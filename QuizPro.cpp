#include <iostream>
using namespace std;

class Quiz
{
private:
    string questions[10];
    string options[10][3];
    int answers[10];
    int score;

public:
    Quiz()
    {
        score = 0;

        questions[0] = "What is the capital of Pakistan?";
        options[0][0] = "Lahore";
        options[0][1] = "Islamabad";
        options[0][2] = "Karachi";
        answers[0] = 2;

        questions[1] = "Which language is used in C++ programming?";
        options[1][0] = "C++";
        options[1][1] = "HTML";
        options[1][2] = "SQL";
        answers[1] = 1;

        questions[2] = "How many continents are there?";
        options[2][0] = "5";
        options[2][1] = "6";
        options[2][2] = "7";
        answers[2] = 3;

        questions[3] = "Which planet is known as Red Planet?";
        options[3][0] = "Mars";
        options[3][1] = "Earth";
        options[3][2] = "Venus";
        answers[3] = 1;

        questions[4] = "2 + 2 = ?";
        options[4][0] = "3";
        options[4][1] = "4";
        options[4][2] = "5";
        answers[4] = 2;

        questions[5] = "Who is the founder of Pakistan?";
        options[5][0] = "Allama Iqbal";
        options[5][1] = "Quaid-e-Azam";
        options[5][2] = "Liaquat Ali Khan";
        answers[5] = 2;

        questions[6] = "Which is the largest ocean?";
        options[6][0] = "Atlantic";
        options[6][1] = "Indian";
        options[6][2] = "Pacific";
        answers[6] = 3;

        questions[7] = "Which keyword is used to create a class in C++?";
        options[7][0] = "class";
        options[7][1] = "object";
        options[7][2] = "struct";
        answers[7] = 1;

        questions[8] = "How many days are in a week?";
        options[8][0] = "7";
        options[8][1] = "8";
        options[8][2] = "6";
        answers[8] = 1;

        questions[9] = "Which device is used to display output?";
        options[9][0] = "Keyboard";
        options[9][1] = "Mouse";
        options[9][2] = "Monitor";
        answers[9] = 3;
    }

    void startQuiz()
    {
        int userAnswer;

        for (int i = 0; i < 10; i++)
        {
            cout << "\nQ" << i + 1 << ". " << questions[i] << endl;

            for (int j = 0; j < 3; j++)
            {
                cout << j + 1 << ". " << options[i][j] << endl;
            }

            cout << "Enter your answer (1-3): ";
            cin >> userAnswer;

            while (userAnswer < 1 || userAnswer > 3)
            {
                cout << "Wrong option! Please select 1, 2, or 3: ";
                cin >> userAnswer;
            }

            if (userAnswer == answers[i])
            {
                score++;
            }
        }
    }

    void showResult()
    {
        cout << "\n===== QUIZ RESULT =====" << endl;
        cout << "Total Correct Answers: " << score << endl;
        cout << "Total Marks: " << score << " / 10" << endl;
    }
};

int main()
{
    Quiz q;
    q.startQuiz();
    q.showResult();

    return 0;
}
