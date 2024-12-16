


from game.game import Game

game = Game()

# render board with sample positions
player_one_positions = [(0, 0), (1, 1), (2, 2)]
player_two_positions = [(0, 2), (1, 1), (2, 0)]
game.render_board(player_one_positions, player_two_positions)
game.render_board()