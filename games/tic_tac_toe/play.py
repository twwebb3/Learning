


from game.game import Game, ComputerPlayer

game = Game()

while True:
    game.render_board()
    player_one_move = input('Player 1: Enter your move (row, col): ')
    row, col = map(int, player_one_move.split(','))
    game.update_positions(1, (row, col))
    if game.check_winner() != 'No winner yet':
        print(game.check_winner())
        break

    game.render_board()
    computer = ComputerPlayer()
    computer.update_player_number(2)
    computer.make_move(game)
    if game.check_winner() != 'No winner yet':
        print(game.check_winner())
        break