
import random

class Game:
    def __init__(self, player_one_positions=None, player_two_positions=None):
        if player_one_positions is None:
            player_one_positions= []
        if player_two_positions is None:
            player_two_positions = []

        self.player_one_positions = player_one_positions
        self.player_two_positions = player_two_positions

    def update_positions(self, player, position):
        if position in self.player_one_positions or position in self.player_two_positions:
            # I don't want a value error, I want to print a message and make the user try again
            print('Position already taken')
            return
        if player == 1:
            self.player_one_positions.append(position)
        elif player == 2:
            self.player_two_positions.append(position)
        else:
            print('Invalid player number')
            return

    def render_board(self):
        board = [[' ' for _ in range(3)] for _ in range(3)]
        for pos in self.player_one_positions:
            x, y = pos
            board[x][y] = 'X'
        for pos in self.player_two_positions:
            x, y = pos
            board[x][y] = 'O'
        for row in board:
            print('|'.join(row))
            if row != board[-1]:
                print('-|-|-')

    def check_winner(self):
        winning_positions = [
            [(0, 0), (0, 1), (0, 2)],
            [(1, 0), (1, 1), (1, 2)],
            [(2, 0), (2, 1), (2, 2)],
            [(0, 0), (1, 0), (2, 0)],
            [(0, 1), (1, 1), (2, 1)],
            [(0, 2), (1, 2), (2, 2)],
            [(0, 0), (1, 1), (2, 2)],
            [(0, 2), (1, 1), (2, 0)]
        ]

        for line in winning_positions:
            if all(cell in self.player_one_positions for cell in line):
                return 'Player 1 wins!'
            elif all(cell in self.player_two_positions for cell in line):
                return 'Player 2 wins!'

        return 'No winner yet'


class ComputerPlayer:
    def __init__(self):
        self.positions = []
        self.player_numer = 2

    def update_player_number(self, player_number):
        self.player_number = player_number

    def find_available_positions(self, game):
        available_positions = []
        for x in range(3):
            for y in range(3):
                if (x, y) not in game.player_one_positions and (x, y) not in game.player_two_positions:
                    available_positions.append((x, y))
        return available_positions

    def make_move(self, game):
        available_positions = self.find_available_positions(game)
        if available_positions:
            position = random.choice(available_positions)
            game.update_positions(self.player_number, position)
            return True
        return False