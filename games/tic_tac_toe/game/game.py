

class Game:
    def __init__(self, player_one_positions=None, player_two_positions=None):
        if player_one_positions is None:
            player_one_positions= []
        if player_two_positions is None:
            player_two_positions = []

        self.player_one_positions = player_one_positions
        self.player_two_positions = player_two_positions

    def update_positions(self, player, position):
        if player == 1:
            self.player_one_positions.append(position)
        elif player == 2:
            self.player_two_positions.append(position)
        else:
            raise ValueError('Invalid player number')

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
