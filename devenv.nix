{
  pkgs,
  lib,
  config,
  ...
}:
{
  # https://devenv.sh/packages/
  packages = [
    pkgs.protobuf
    pkgs.mypy-protobuf
    pkgs.python3
    pkgs.python3Packages.protoletariat
  ];

  # https://devenv.sh/languages/
  # languages = {
  #   python = {
  #     enable = true;
  #     venv = {
  #       enable = true;
  #       requirements = ''
  #         protoletariat
  #       '';
  #     };
  #   };
  # };

  # See full reference at https://devenv.sh/reference/options/
}

