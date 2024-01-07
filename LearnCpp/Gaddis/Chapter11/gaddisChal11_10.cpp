/*  Search Function for the Speakers' Bureau Program
Add a function to Programming Challenge 9 that allows the user to search for a 
speaker on a particular topic. It should accept a key word as an argument and then 
search the array for a structure with that key word in the Speaking Topic field. All 
structures that match should be displayed. If no structure matches, a message saying 
so should be displayed.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct SpeakerData
{
    string name;
    string telephoneNumber;
    string speakingTopic;
    double feeRequired;
};

void displaySpeaker(SpeakerData);
void searchSpeaker(SpeakerData[], string);

int main()
{
    SpeakerData speaker1 = {"John Doe", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker2 = {"Jane Doe", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker3 = {"John Smith", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker4 = {"Jane Smith", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker5 = {"John Doe", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker6 = {"Jane Doe", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker7 = {"John Smith", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker8 = {"Jane Smith", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker9 = {"John Doe", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker10 = {"Jane Doe", "555-555-5555", "How to Program", 1000};

    SpeakerData speaker11 = {"John Smith", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker12 = {"Jane Smith", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker13 = {"John Doe", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker14 = {"Jane Doe", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker15 = {"John Smith", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker16 = {"Jane Smith", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker17 = {"John Doe", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker18 = {"Jane Doe", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker19 = {"John Smith ", "555-555-5555", "How to Program", 1000};
    SpeakerData speaker20 = {"Jane Smith", "555-555-5555", "How to Program", 1000};

    SpeakerData speakers[20] = {speaker1, speaker2, speaker3, speaker4, speaker5, speaker6, speaker7, speaker8, speaker9, speaker10, speaker11, speaker12, speaker13, speaker14, speaker15, speaker16, speaker17, speaker18, speaker19, speaker20};

    int choice = 0;
    int speakerNumber = 0;
    string topic;

    do
    {
        cout << "1. Enter speaker data" << endl;
        cout << "2. Change speaker data" << endl;
        cout << "3. Display all speaker data" << endl;
        cout << "4. Search for speaker by topic" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the speaker number: ";
                cin >> speakerNumber;
                cout << "Enter the speaker's name: ";
                cin.ignore();
                getline(cin, speakers[speakerNumber - 1].name);
                cout << "Enter the speaker's telephone number: ";
                getline(cin, speakers[speakerNumber - 1].telephoneNumber);
                cout << "Enter the speaker's speaking topic: ";
                getline(cin, speakers[speakerNumber - 1].speakingTopic);
                cout << "Enter the speaker's fee required: ";
                cin >> speakers[speakerNumber - 1].feeRequired;
                break;
            case 2:
                cout << "Enter the speaker number: ";
                cin >> speakerNumber;
                cout << "Enter the speaker's name: ";
                cin.ignore();
                getline(cin, speakers[speakerNumber - 1].name);
                cout << "Enter the speaker's telephone number: ";
                getline(cin, speakers[speakerNumber - 1].telephoneNumber);
                cout << "Enter the speaker's speaking topic: ";
                getline(cin, speakers[speakerNumber - 1].speakingTopic);
                cout << "Enter the speaker's fee required: ";
                cin >> speakers[speakerNumber - 1].feeRequired;
                break;
            case 3:
                for (int i = 0; i < 20; i++)
                {
                    displaySpeaker(speakers[i]);
                }
                break;
            case 4:
                cout << "Enter the topic to search for: ";
                cin.ignore();
                getline(cin, topic);
                searchSpeaker(speakers, topic);
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}

void displaySpeaker(SpeakerData speaker)
{
    cout << "Speaker Name: " << speaker.name << endl;
    cout << "Speaker Telephone Number: " << speaker.telephoneNumber << endl;
    cout << "Speaker Speaking Topic: " << speaker.speakingTopic << endl;
    cout << "Speaker Fee Required: " << speaker.feeRequired << endl;
    cout << endl;
}

void searchSpeaker(SpeakerData speakers[], string topic)
{
    bool found = false;

    for (int i = 0; i < 20; i++)
    {
        if (speakers[i].speakingTopic == topic)
        {
            displaySpeaker(speakers[i]);
            found = true;
        }
    }

    if (!found)
    {
        cout << "No speakers found with that topic." << endl;
    }
}