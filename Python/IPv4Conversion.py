
'''SOLVED'''
def binary_to_decimal(binary_input: int) -> int:
    decimal = 0
    power = 1
    while binary_input > 0:
        remainder = binary_input % 10
        binary_input = binary_input // 10
        decimal += remainder * power
        power *= 2

def decimal_to_binary(decimal_input: int) -> int:
    return "{0:032b}".format(int(decimal_input)) 
    # alternatively: return int(bin(decimal_input)[2:])

def int32_to_ip(int32: int) -> str:
    binary_number: int = decimal_to_binary(int32)
    binary_length: int = len(binary_number)

    binary_octets = []
    buffer = ""
    for index, value in enumerate(str(binary_number), start=1):
        buffer += value
        if index % 8 == 0:
            binary_octets.append(buffer)
            buffer = "" # flush buffer

    octets = [binary_to_decimal(int(octet)) for octet in binary_octets]

    ip_address = ".".join(map(str, octets))

    return ip_address


if __name__ == "__main__":
    examples = [
        2149583361,
        0,
        2149583361,
        32
    ]
    for example in examples:
        print(f"{example} converts to: {int32_to_ip(example)}")