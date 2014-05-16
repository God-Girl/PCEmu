#include "808x.h"
#include "ram.h"

namespace RAM
{
u8 RAM[0x100000];

u8 rb(u16 seg, u16 off)
{
  return RAM[CPU808X::getaddr(seg,off)];
}

void wb(u16 seg, u16 off, u8 data)
{
  RAM[CPU808X::getaddr(seg,off)] = data;
}

}