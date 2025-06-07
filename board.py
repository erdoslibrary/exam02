from typing import List, Dict, Tuple

def solution(keyinput: List[str], board: List[int]) -> List[int]:
    x: int = 0
    y: int = 0
    
    max_x: int = board[0] // 2
    max_y: int = board[1] // 2
    
    moves: Dict[str, List[int]] = {
        "left": [-1, 0],
        "right": [1, 0],
        "up": [0, 1],
        "down": [0, -1]
    }
    
    for key in keyinput:
        new_x: int = x + moves[key][0]
        new_y: int = y + moves[key][1]
        
        if -max_x <= new_x <= max_x and -max_y <= new_y <= max_y:
            x, y = new_x, new_y
    
    return [x, y]