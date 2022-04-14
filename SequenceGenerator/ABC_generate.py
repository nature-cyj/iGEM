import numpy as np

n_cells = 20                   # number of cells
pA = [0.2, 0.5, 0.2, 0.1]      # probabilities of A to be inserted 0, 1, 2, 3 times
pB = [0.1, 0.5, 0.3, 0.1]      # probabilities of B to be inserted 0, 1, 2, 3 times
pC = [0.3, 0.5, 0.1, 0.1]      # probabilities of C to be inserted 0, 1, 2, 3 times

original_msg = "ABAACCABBCABBAACCABBACA"   # can be imported from txt file later

received_msg_group = ['']*n_cells    # groups of received message ["AABB..", "ABAA..", ...]

# Choose number from given probabilities (np.random.choice)
for i in range(n_cells):
    for symbol in original_msg:
        if symbol == 'A':
            n_inserted = np.random.choice(range(4), 1, p=pA)
            received_msg_group[i] += 'A' * n_inserted[0]
        elif symbol == 'B':
            n_inserted = np.random.choice(range(4), 1, p=pB)
            received_msg_group[i] += 'B' * n_inserted[0]
        elif symbol == 'C':
            n_inserted = np.random.choice(range(4), 1, p=pC)
            received_msg_group[i] += 'C' * n_inserted[0]

print(received_msg_group)

# Decoder based on sequential voting




