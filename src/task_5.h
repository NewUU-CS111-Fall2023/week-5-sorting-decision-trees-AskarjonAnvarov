def display_color_matrix(symbol_matrix):
    color_map = {'b': 'Blue', 'y': 'Yellow', 'w': 'White'}

    for row in symbol_matrix:
        for symbol in row:
            color = color_map.get(symbol, 'Unknown')
            print(f"{color} ", end='')
        print()

# Example matrix of symbols
symbol_matrix = [
    ['b', 'y', 'w', 'y', 'b'],
    ['w', 'y', 'b', 'y', 'w'],
    ['b', 'w', 'y', 'w', 'b'],
    ['y', 'b', 'w', 'b', 'y'],
]

# Display the visual representation of colors
display_color_matrix(symbol_matrix)
