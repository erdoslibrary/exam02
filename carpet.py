from typing import List, Optional, Tuple

def solution(brown: int, yellow: int) -> List[int]:

    total : int = brown + yellow
    for width in range(3, int(total **0.5) + 1):
        if total % width == 0:
            height = total // width
            
            yellow_area = (width - 2) * (height - 2)
            if yellow_area == yellow:
                return [max(width, height), min(width, height)]
    return None