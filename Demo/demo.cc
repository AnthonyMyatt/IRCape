#include <libIR.h>

int main()
{
	LibIR::IRSend IR;

	IR.sendNEC(0x01FE41BE, 32, LibIR::IRSend::SEND_PIN_3);
	//IR.sendNEC(0x20202020, 32, LibIR::IRSend::SEND_PIN_1);
}
