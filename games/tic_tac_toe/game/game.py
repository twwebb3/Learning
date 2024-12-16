

class Game:
    def __init__(self, player_one_positions=None, player_two_positions=None):
        if player_one_positions is None:
            player_one_positions= []
        if player_two_positions is None:
            player_two_positions = []

        self.player_one_positions = player_one_positions
        self.player_two_positions = player_two_positions

    def render_board(self, player_one_positions=None, player_two_positions=None):
        if player_one_positions is None:
            player_one_positions= self.player_one_positions
        if player_two_positions is None:
            player_two_positions = self.player_two_positions

        board = [[' ' for _ in range(3)] for _ in range(3)]
        for pos in player_one_positions:
            x, y = pos
            board[x][y] = 'X'
        for pos in player_two_positions:
            x, y = pos
            board[x][y] = 'O'
        for row in board:
            print('|'.join(row))
            if row != board[-1]:
                print('-|-|-')