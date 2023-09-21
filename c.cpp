#include <iostream>
#include <vector>

using namespace std;

// Constants for the number of rows and columns in the theater
const int NUM_ROWS = 5;
const int NUM_COLS = 10;

// Function to display the available seats in the theater
void showSeats(const vector<vector<char>> &seats)
{
    cout << "Available Seats:" << endl;
    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to book a seat and calculate the total cost
bool bookSeat(vector<vector<char>> &seats, int row, int col, double &totalCost)
{
    if (row < 1 || row > NUM_ROWS || col < 1 || col > NUM_COLS || seats[row - 1][col - 1] != 'O')
    {
        cout << "Invalid seat selection. Please choose a valid seat." << endl;
        return false;
    }

    // Calculate the ticket cost (e.g., $10 per ticket)
    double ticketPrice = 10.0;

    // Mark the seat as booked
    seats[row - 1][col - 1] = 'X';

    // Update the total cost
    totalCost += ticketPrice;

    cout << "Seat booked successfully!" << endl;
    return true;
}

int main()
{
    vector<vector<char>> seats(NUM_ROWS, vector<char>(NUM_COLS, 'O')); // 'O' represents an available seat
    double totalCost = 0.0;

    cout << "Welcome to the SmartMovie Ticket Booking System!" << endl;

    while (true)
    {
        showSeats(seats);

        int row, col;
        cout << "Enter the row and column number (e.g., 4 5) or enter 0 0 to exit: ";
        cin >> row >> col;

        if (row == 0 && col == 0)
        {
            break; // Exit the program
        }

        if (bookSeat(seats, row, col, totalCost))
        {
            cout << "Total Cost: $" << totalCost << endl;
        }
    }

    cout << "Thank you for using the Smart Movie Ticket Booking System!" << endl;

    return 0;
}