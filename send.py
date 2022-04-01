from exam_protocol_pb2 import BRD_ctrl as Adc_msg
from socket import socket, AF_INET, SOCK_DGRAM
import signal

if __name__ == '__main__':
    sock = socket(AF_INET, SOCK_DGRAM)
    iter = 0
    ex = False
    while not ex:
        pkt = Adc_msg()
        cmd = input(">")
        if cmd != 'exit':
            pkt.command = 0
        else:
            ex = True
            pkt.command = 1

        pkt.out = iter
        pkt.status = -1
        print(f"cmd: {pkt.command}, out:{pkt.out}, status:{pkt.status}")
        print(pkt.SerializeToString())
        sock.sendto(pkt.SerializeToString(), ("127.0.0.3", 9009))

        iter += 1
