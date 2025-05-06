# SSL packet proto

Protobuf definitions for the SSL packets for SSL infrastructure and SPbUnited team.

## Usage

### Install

```bash
git submodule add https://github.com/SPbUnited/ssl_packet_package.git
git submodule update --init --recursive
cd ssl_packet_package
make init
cd ..
```

### Build

```bash
cd ssl_packet_package
make build
cd ..
```

### Example

```python
from ssl_packet_package.protopy.spbunited.robot import control_pb2 as rcpb

# Only one of control types will be set in the message
# List of available control types: https://github.com/SPbUnited/ssl_packet_package/blob/main/ssl_packet_package/protopy/spbunited/robot/control.proto
robot_command = rcpb.RobotCommand(
    robot_id=1,
    global_coordinates=rcpb.GlobalCoordinates(x=1, y=2, angle=3),
)

serialized_robot_command = robot_command.SerializeToString()

print(robot_command)
print(serialized_robot_command)
print(len(serialized_robot_command))
```