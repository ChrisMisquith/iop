import random

class RPSGame:
    def __init__(self, max_rnds):
        self.max_rnds = max_rnds
        self.cur_rnd = 0
        self.p_win = 0  # player wins
        self.c_win = 0  # cpu wins
        self.moves = ["rock", "paper", "scissors"]
    
    def cpu_pick(self):
        return random.choice(self.moves)
    
    def rnd_win(self, p_move, c_move):
        if p_move == c_move:
            return "tie!"
        elif (p_move == "rock" and c_move == "scissors") or \
             (p_move == "scissors" and c_move == "paper") or \
             (p_move == "paper" and c_move == "rock"):
            self.p_win += 1  # player win
            return "you win!"
        else:
            self.c_win += 1  # cpu win
            return "cpu wins!"
    
    def overall_win(self):  # game winner
        if self.p_win > self.c_win:
            return "you won!"
        elif self.c_win > self.p_win:
            return "cpu won!"
        else:
            return "tie game!"
    
    def play(self):  # main game loop
        while self.cur_rnd < self.max_rnds:
            print(f"rnd {self.cur_rnd}")  # show round
            p_move = input("rock, paper, scissors? ").lower()
            if p_move not in self.moves:
                print("try again!")  # invalid move
                continue

            self.cur_rnd += 1
            c_move = self.cpu_pick()
            print(f"cpu: {c_move}")  # cpu move
            print(self.rnd_win(p_move, c_move))  # who won
            print()
        
        print(self.overall_win())  # game end

rnds = int(input("rounds? "))  # get rounds
game = RPSGame(rnds)
game.play()
