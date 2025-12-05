import board
from kmk.kmk_keyboard import KMKKeyboard
from kmk.keys import KC
from kmk.modules.layers import Layers
from kmk.modules.encoder import EncoderHandler
from kmk.modules.media_keys import MediaKeys
from kmk.matrix import DiodeOrientation

keyboard = KMKKeyboard()

keyboard.col_pins = (board.GP2, board.GP28, board.GP29, board.GP27)
keyboard.row_pins = (board.GP0, board.GP1)
keyboard.diode_orientation = DiodeOrientation.COL2ROW

layers_ext = Layers()
keyboard.modules.append(layers_ext)

media = MediaKeys()
keyboard.modules.append(media)

encoder_handler = EncoderHandler()
keyboard.modules.append(encoder_handler)

encoder_handler.pins = ((board.GP6, board.GP7, None),)

keyboard.keymap = [
    [KC.KP_1, KC.KP_2, KC.KP_3, KC.NO],
    [KC.KP_4, KC.ENTER, KC.NO, KC.KP_5]
]

if __name__ == '__main__':
    keyboard.go()
