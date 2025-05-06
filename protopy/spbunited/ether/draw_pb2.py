"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
_sym_db = _symbol_database.Default()
DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x10ether/draw.proto\x12\nether.draw"\x84\x01\n\x0bDrawCommand\x123\n\x06layers\x18\x01 \x03(\x0b2#.ether.draw.DrawCommand.LayersEntry\x1a@\n\x0bLayersEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12 \n\x05value\x18\x02 \x01(\x0b2\x11.ether.draw.Layer:\x028\x01"A\n\x05Layer\x12$\n\x04data\x18\x01 \x03(\x0b2\x16.ether.draw.DrawObject\x12\x12\n\nis_visible\x18\x02 \x01(\x08"\xc4\x02\n\nDrawObject\x12)\n\trobot_yel\x18\x01 \x01(\x0b2\x14.ether.draw.RobotYelH\x00\x12)\n\trobot_blu\x18\x02 \x01(\x0b2\x14.ether.draw.RobotBluH\x00\x12 \n\x04ball\x18\x03 \x01(\x0b2\x10.ether.draw.BallH\x00\x12 \n\x04line\x18\x04 \x01(\x0b2\x10.ether.draw.LineH\x00\x12"\n\x05arrow\x18\x05 \x01(\x0b2\x11.ether.draw.ArrowH\x00\x12&\n\x07polygon\x18\x06 \x01(\x0b2\x13.ether.draw.PolygonH\x00\x12 \n\x04rect\x18\x07 \x01(\x0b2\x10.ether.draw.RectH\x00\x12$\n\x06circle\x18\x08 \x01(\x0b2\x12.ether.draw.CircleH\x00B\x08\n\x06object"2\n\x08RobotYel\x12\t\n\x01x\x18\x01 \x01(\x02\x12\t\n\x01y\x18\x02 \x01(\x02\x12\x10\n\x08rotation\x18\x03 \x01(\x02"2\n\x08RobotBlu\x12\t\n\x01x\x18\x01 \x01(\x02\x12\t\n\x01y\x18\x02 \x01(\x02\x12\x10\n\x08rotation\x18\x03 \x01(\x02"\x1c\n\x04Ball\x12\t\n\x01x\x18\x01 \x01(\x02\x12\t\n\x01y\x18\x02 \x01(\x02"D\n\x04Line\x12\x0e\n\x06x_list\x18\x01 \x03(\x02\x12\x0e\n\x06y_list\x18\x02 \x03(\x02\x12\r\n\x05color\x18\x03 \x01(\t\x12\r\n\x05width\x18\x04 \x01(\x02"S\n\x05Arrow\x12\t\n\x01x\x18\x01 \x01(\x02\x12\t\n\x01y\x18\x02 \x01(\x02\x12\n\n\x02dx\x18\x03 \x01(\x02\x12\n\n\x02dy\x18\x04 \x01(\x02\x12\r\n\x05color\x18\x05 \x01(\t\x12\r\n\x05width\x18\x06 \x01(\x02"G\n\x07Polygon\x12\x0e\n\x06x_list\x18\x01 \x03(\x02\x12\x0e\n\x06y_list\x18\x02 \x03(\x02\x12\r\n\x05color\x18\x03 \x01(\t\x12\r\n\x05width\x18\x04 \x01(\x02"J\n\x04Rect\x12\t\n\x01x\x18\x01 \x01(\x02\x12\t\n\x01y\x18\x02 \x01(\x02\x12\r\n\x05width\x18\x03 \x01(\x02\x12\x0e\n\x06height\x18\x04 \x01(\x02\x12\r\n\x05color\x18\x05 \x01(\t"=\n\x06Circle\x12\t\n\x01x\x18\x01 \x01(\x02\x12\t\n\x01y\x18\x02 \x01(\x02\x12\x0e\n\x06radius\x18\x03 \x01(\x02\x12\r\n\x05color\x18\x04 \x01(\tb\x06proto3')
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ether.draw_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:
    DESCRIPTOR._options = None
    _DRAWCOMMAND_LAYERSENTRY._options = None
    _DRAWCOMMAND_LAYERSENTRY._serialized_options = b'8\x01'
    _DRAWCOMMAND._serialized_start = 33
    _DRAWCOMMAND._serialized_end = 165
    _DRAWCOMMAND_LAYERSENTRY._serialized_start = 101
    _DRAWCOMMAND_LAYERSENTRY._serialized_end = 165
    _LAYER._serialized_start = 167
    _LAYER._serialized_end = 232
    _DRAWOBJECT._serialized_start = 235
    _DRAWOBJECT._serialized_end = 559
    _ROBOTYEL._serialized_start = 561
    _ROBOTYEL._serialized_end = 611
    _ROBOTBLU._serialized_start = 613
    _ROBOTBLU._serialized_end = 663
    _BALL._serialized_start = 665
    _BALL._serialized_end = 693
    _LINE._serialized_start = 695
    _LINE._serialized_end = 763
    _ARROW._serialized_start = 765
    _ARROW._serialized_end = 848
    _POLYGON._serialized_start = 850
    _POLYGON._serialized_end = 921
    _RECT._serialized_start = 923
    _RECT._serialized_end = 997
    _CIRCLE._serialized_start = 999
    _CIRCLE._serialized_end = 1060