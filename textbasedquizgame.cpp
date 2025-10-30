/* 
-------------------------------------------------------------
🎮 C++ Quiz Game Project
-------------------------------------------------------------
Author: SHIVANSH VISHWAKARMA
Language: C++  
Description:
This is a simple console-based Quiz Game developed in C++ 
where users can play quizzes from three categories:
1️⃣ General Awareness  
2️⃣ Science  
3️⃣ Sports  

Each category has 10 multiple-choice questions.  
Users select a category, answer questions, and get their final score.  
It helps beginners practice loops, arrays, strings, switch statements, 
and conditional logic in C++.  

Perfect for beginners and portfolio demonstration!

-------------------------------------------------------------
*/

#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;      // Use the standard namespace

int main(){
    int value; // To store user's category choice
  
    // Display the quiz categories
    cout<<"1. General Awareness "<<endl;
    cout<<"2. Science "<<endl;
    cout<<"3. Sports"<<endl;
    cout<<"Enter which game you want to play "<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    
    cin>>value; // User selects category
    
    switch(value){ // Switch to handle category selection
        
        // ======================= CASE 1: GENERAL AWARENESS =======================
        case 1:{
            // Questions array for General Awareness
            string questions[]={
                "1. Who is known as the Father of the Indian Constitution?",
                "2. What is the capital city of Australia?",
                "3. Which planet is known as the “Red Planet”?",
                "4. Who was the first woman Prime Minister of India?",
                "5. Which day is celebrated as World Environment Day?",
                "6. In which year did India gain independence?",
                "7. Which is the largest ocean in the world?",
                "8. Who wrote the National Anthem of India?",
                "9. What is the chemical symbol for gold?",
                "10. Which Indian city is known as the “Pink City”?"
            };

            // Options for each question
            string options[][4]={
                {"A. Jawaharlal Nehru","B. Dr. B. R. Ambedkar" ,"C. Mahatma Gandhi" ,"D. Sardar Vallabhbhai Patel"},
                {"A) Sydney" ,"B) Canberra" ,"C) Melbourne","D) Perth"},
                {"A) Venus", "B) Jupiter" ,"C) Mars" ,"D) Saturn"},
                {"A) Sarojini Naidu" ,"B) Indira Gandhi" ,"C) Pratibha Patil" ,"D) Sushma Swaraj"},
                {"A) 5th June" ,"B) 22nd April" ,  "C) 8th March ", "D) 10th December"},
                {"A) 1945","B) 1946" ,"C) 1947" ,"D) 1948"},
                {"A) Atlantic Ocean" ,"B) Indian Ocean" , "C) Arctic Ocean" ,"D) Pacific Ocean"},
                {"A) Rabindranath Tagore ","B) Bankim Chandra Chatterjee" ,"C) Subhash Chandra Bose" ,"D) Sarojini Naidu"},
                {"A) Au" ,"B) Ag ","C) Gd ", "D) Go"},
                {"A) Jaipur" , "B) Delhi" ,"C) Udaipur" ,"D) Jodhpur"}
            };

            // Correct answers array
            char answer[]={'B','B','C','B','A','C','D','A','A','A'};

            int score = 0;       // To track correct answers
            char useranswer;     // User's selected option

            // Loop through 10 questions
            for (int i = 0; i < 10; i++) {
                cout << questions[i] << endl;

                // Display all 4 options
                for (int j = 0; j < 4; j++) {
                    cout << options[i][j] << endl;
                }

                cout << "\nEnter your answer (A/B/C/D): ";
                cin >> useranswer;

                // Compare user answer with correct one (case-insensitive)
                if (toupper(useranswer) == answer[i]) {
                    cout << "✅ Correct!\n\n";
                    score++;
                } else {
                    cout << "❌ Wrong! Correct answer is " << answer[i] << "\n\n";
                }
            }

            // Display final score
            cout << "Your final score: " << score << " / 10\n";
            cout << "Thanks for playing!\n";
            break;
        }

        // ======================= CASE 2: SCIENCE =======================
        case 2:{
            // Science Questions
            string questions[]={
                "1. What is the chemical symbol for water?",
                "2. Which planet is known as the “Red Planet”?",
                "3. What is the speed of light in vacuum?",
                "4. Which gas do plants absorb during photosynthesis?",
                "5. What part of the cell contains genetic material (DNA)?",
                "6. Which force keeps planets in orbit around the Sun?",
                "7. What is the main gas found in the Earth’s atmosphere?",
                "8. Which instrument is used to measure temperature?",
                "9. Which of these is NOT a renewable source of energy?",
                "10. Which vitamin is produced in the human body when exposed to sunlight?"
            };

            // Science Options
            string options[][4]={
                {"A) O₂","B) CO₂", "C) H₂O ","D) HO₂"},
                {"A) Venus","B) Mars","C) Jupiter","D) Mercury"},
                {"A) 3 * 10⁵ m/s","B) 3 * 10⁶ m/s","C) 3 * 10⁸ m/s ","D) 3 * 10¹⁰ m/s"},
                {"A) Oxygen","B) Nitrogen","C) Carbon dioxide","D) Hydrogen"},
                {"A) Barometer" ,"B) Thermometer","C) Hygrometer","D) Anemometer"},
                {"A) Solar energy","B) Wind energy","C) Coal","D) Hydro power"},
                {"A) Vitamin A" ,"B) Vitamin B","C) Vitamin C","D) Vitamin D"}
            };

            // Correct Answers
            char answer[]={'C','B','C','C','B','B','C','B','C','D'};

            int score = 0;
            char useranswer;

            // Question Loop
            for (int i = 0; i < 10; i++) {
                cout << questions[i] << endl;

                for (int j = 0; j < 4; j++) {
                    cout << options[i][j] << endl;
                }

                cout << "\nEnter your answer (A/B/C/D): ";
                cin >> useranswer;

                if (toupper(useranswer) == answer[i]) {
                    cout << "✅ Correct!\n\n";
                    score++;
                } else {
                    cout << "❌ Wrong! Correct answer is " << answer[i] << "\n\n";
                }
            }

            cout << "Your final score: " << score << " / 10\n";
            cout << "Thanks for playing!\n";
            break;
        }

        // ======================= CASE 3: SPORTS =======================
        case 3:{
            // Sports Questions
            string questions[]={
                "1. Which country won the FIFA World Cup 2022?",
                "2. How many players are there in a cricket team (on the field)?",
                "3. Who is known as the “God of Cricket”?",
                "4. In which sport is the term “Love” used?",
                "5. How many rings are there in the Olympic symbol?",
                "6. Which country hosts the Wimbledon Championship?",
                "7. What is the national sport of India (officially)?",
                "8. Which player is known as “King of Football”?",
                "9. How many players are there in a basketball team (on the court)?",
                "10. Where were the 2024 Olympic Games held?"
            };

            // Sports Options
            string options[][4]={
                {"A) France"," B) Argentina"," C) Brazil","D) Germany"},
                {"A) 10 ","B) 9","C) 11","D) 12"},
                {"A) Virat Kohli","B) Ricky Ponting","C) Sachin Tendulkar","D) MS Dhoni"},
                {"A) Football","B) Tennis","C) Hockey","D) Basketball"},
                {"A) 4","B) 5","C) 6","D) 7"},
                {"A) USA","B) France","C) England","D) Australia"},
                {"A) Cricket","B) Kabaddi","C) Hockey","D) Football"},
                {"A) Pele","B) Lionel Messi","C) Cristiano Ronaldo","D) Diego Maradona"},
                {"A) 5","B) 6 ","C) 7","D) 9"},
                {"A) Tokyo","B) Paris" ,"C) Beijing","D) London"}
            };

            // Correct Answers
            char answer[]={'B','C','C','B','B','C','C','A','A','B'};

            int score = 0;
            char useranswer;

            // Question Loop
            for (int i = 0; i < 10; i++) {
                cout << questions[i] << endl;

                for (int j = 0; j < 4; j++) {
                    cout << options[i][j] << endl;
                }

                cout << "\nEnter your answer (A/B/C/D): ";
                cin >> useranswer;

                if (toupper(useranswer) == answer[i]) {
                    cout << "✅ Correct!\n\n";
                    score++;
                } else {
                    cout << "❌ Wrong! Correct answer is " << answer[i] << "\n\n";
                }
            }

            cout << "Your final score: " << score << " / 10\n";
            cout << "Thanks for playing!\n";
            break;
        }
    }
}
