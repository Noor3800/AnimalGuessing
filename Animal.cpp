#include <iostream>

using namespace std;


//-------------------Node class------------------------------------------
class Node
{
public:
    string data;
    Node *right, *left;
    Node()
    {
        left = nullptr;
        right = nullptr;
    }

    Node(const string &info)
    {
        left = nullptr;
        right = nullptr;
        data = info;
    }
};

//-----------------------Binary Tree class--------------------------------------
class BinaryTree
{
public:
    Node *root, *current;
    BinaryTree()
    {
        root = nullptr;
        current = nullptr;
    }

    void Insert(const string &info, const string &move)
    {
        root = InsertItem(root, info, move);
    }


    bool isEmpty()
    {
        return root == nullptr;
    }

    bool isAtEnd()
    {
        return current != nullptr && current->left == nullptr && current->right == nullptr;
    }

    string getCurrentData()
    {
        return current->data;
    }

    void moveCurrentYes()
    {
        current = current->right;
    }

    void moveCurrentNo()
    {
        current = current->left;
    }

    void setCurrentToStart()
    {
        current = root;
    }

    Node *InsertItem(Node *newRoot, const string &value, const string &move)
    {
        if (newRoot == nullptr)
        {
            newRoot = new Node(value);
            return newRoot;
        }
        else if (move == "Y")
        {
            newRoot->right = InsertItem(newRoot->right, value, move);
        }
        else
        {
            newRoot->left = InsertItem(newRoot->left, value, move);
        }
        return newRoot;
    }
};

//-----------------------Bot class------------------------------------------------------
//In this class a bot object guesses the animals
class Bot
{
public:
    BinaryTree GuessTree;

    Bot()
    {
        GuessTree = BinaryTree();
    }

    void askQuestion()
    {
        string animal;
        string question;
        char YorN;
        if (GuessTree.isEmpty())
        {
            giveUp();
        }
        else if (GuessTree.isAtEnd())
        {
            animal = GuessTree.getCurrentData();
            question = "I guess it is " + animal + ".";
            do
            {
                cout << question << endl;
                cin >> YorN;
                YorN = toupper(YorN);
                if (YorN == 'Y')
                {
                    cout << "I win!" << endl;
                    GuessTree.setCurrentToStart();
                }
                else if (YorN == 'N')
                {
                    giveUp();
                }
                else
                {
                    cout << "Invalid Character. Try Again." << endl;
                }
            } while (YorN != 'Y' && YorN != 'N');
        }
        else
        {
            question = GuessTree.getCurrentData();
            do
            {
                cout << question << endl;
                cin >> YorN;
                YorN = toupper(YorN);
                if (YorN == 'Y')
                {
                    GuessTree.moveCurrentYes();
                    askQuestion();
                }
                else if (YorN == 'N')
                {
                    if (GuessTree.current->left == nullptr)
                    {
                        giveUp();
                    }
                    else
                    {
                        GuessTree.moveCurrentNo();
                        askQuestion();
                    }
                }
                else
                {
                    cout << "Invalid Character. Try Again." << endl;
                }
            } while (YorN != 'Y' && YorN != 'N');
        }
    }

    void giveUp()
    {
        string oldAnimal;
        string animal;
        string question;
        string newquestion;
        cout << "I give up. What is it?" << endl;
        cin.ignore();
        getline(cin, animal);
        question = "Give me a hint about " + animal;
        cout << question << endl;
        getline(cin, newquestion);

        if (GuessTree.isEmpty())
        {
            GuessTree.Insert(newquestion, "Y");
            GuessTree.Insert(animal, "Y");
            GuessTree.setCurrentToStart();
        }
        else if (GuessTree.current->data == GuessTree.root->data)
        {
            GuessTree.Insert(newquestion, "N");
            GuessTree.moveCurrentNo();
            GuessTree.current->right = new Node(animal);
            GuessTree.setCurrentToStart();
        }
        else
        {
            if (GuessTree.current->data.find("?") != string::npos)
            {
                GuessTree.current->left = new Node(newquestion);
                GuessTree.current->left->right = new Node(animal);
                GuessTree.setCurrentToStart();
            }
            else
            {
                oldAnimal = GuessTree.current->data;
                GuessTree.current->data = newquestion;
                GuessTree.current->left = new Node(oldAnimal);
                GuessTree.current->right = new Node(animal);
                GuessTree.setCurrentToStart();
            }
        }
    }
};

//-----------------------------Main method---------------------------------------

int main()
{
    Bot GuessBot;
    char charChoice;
    char charEnd;

    cout << "______________Welcome!____________" << endl;
    cout << endl;
    cout << "Let's play a guessing game!" << endl;

    do
    {
        // Do-while loop to check character entered and allow user to re-enter valid arguments
        cout << "Think of an animal. Ready? ('y' to continue)" << endl;
        cin >> charChoice;
        charChoice = toupper(charChoice);
        if (charChoice == 'Y')
        {
            do
            {
                GuessBot.askQuestion();
                do
                {
                    cout << "Would you like to play again? (y/n)" << endl;
                    cin >> charEnd;
                    charEnd = toupper(charEnd);
                    if (charEnd != 'Y' && charEnd != 'N')
                    {
                        cout << "Invalid Character." << endl;
                    }
                } while (charEnd != 'Y' && charEnd != 'N');
            } while (charEnd != 'N');
        }
        else if (charChoice == 'N')
        {
            cout << "I'll wait." << endl;
        }
        else
        {
            cout << "Invalid Character. Try Again." << endl;
        }
    } while (charChoice != 'Y');

    return 0;
}

