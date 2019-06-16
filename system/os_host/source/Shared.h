//Conflicting method: BIOS::LCD::Print$5
//Conflicting method: BIOS::LCD::Print$5
// Automatically generated by exports.js

uint32_t GetProcAddress(char* symbol)
{
  uint32_t hash = 5381;
  uint8_t c;
  while ((c = *symbol++) != 0)
    hash = ((hash << 5) + hash) + c;

  switch (hash)
  {
    case 0x0e0071e6: return (uint32_t)sprintf;
    case 0x2d1891f3: return (uint32_t)vsprintf;
    case 0x1c2745a7: return (uint32_t)static_cast<void(*)(CRect const&, unsigned long, unsigned long)>(GUI::Background); 
    case 0xcf4f6e0e: return (uint32_t)static_cast<void(*)(CRect const&, unsigned short)>(GUI::Window); 
    case 0x517a3861: return (uint32_t)static_cast<char*(*)()>(BIOS::OS::GetArgument); 
    case 0x57af171d: return (uint32_t)static_cast<bool(*)()>(BIOS::OS::HasArgument); 
    case 0x47c3f38a: return (uint32_t)static_cast<void(*)(char*)>(BIOS::OS::SetArgument); 
    case 0xa9bd8661: return (uint32_t)static_cast<void(*)(unsigned long)>(BIOS::OS::EnableInterrupts); 
    case 0xcd2d85b8: return (uint32_t)static_cast<uint32_t(*)()>(BIOS::OS::DisableInterrupts); 
    case 0x3d2d2490: return (uint32_t)BIOS::OS::GetInterruptVector;
    case 0x7a04e3e3: return (uint32_t)static_cast<void(*)(BIOS::OS::EInterruptVector, void (*)())>(BIOS::OS::SetInterruptVector); 
    case 0xd6251d2c: return (uint32_t)static_cast<void(*)(char const*, ...)>(BIOS::DBG::Print); 
    case 0xd00658b3: return (uint32_t)static_cast<ui32(*)()>(BIOS::FAT::GetFileSize); 
    case 0x2e3556ed: return (uint32_t)static_cast<PVOID(*)()>(BIOS::FAT::GetSharedBuffer); 
    case 0x3737a1be: return (uint32_t)static_cast<BIOS::FAT::EResult(*)()>(BIOS::FAT::Init); 
    case 0xa9fb0fcc: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(char const*, unsigned char)>(BIOS::FAT::Open); 
    case 0xbd600008: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(unsigned char*)>(BIOS::FAT::Read); 
    case 0x4de603a9: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(unsigned long)>(BIOS::FAT::Seek); 
    case 0x38527974: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(int)>(BIOS::FAT::Close); 
    case 0x38527981: return (uint32_t)static_cast<BIOS::FAT::EResult(*)()>(BIOS::FAT::Close); 
    case 0x77b6d7f8: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(unsigned char*)>(BIOS::FAT::Write); 
    case 0x78f7457b: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(char*)>(BIOS::FAT::OpenDir); 
    case 0xa57b178b: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(BIOS::FAT::TFindFile*)>(BIOS::FAT::FindNext); 
    case 0xb1aa1f24: return (uint32_t)static_cast<bool(*)()>(BIOS::KEY::KeyPressed); 
    case 0x748d10c3: return (uint32_t)static_cast<BIOS::KEY::EKey(*)()>(BIOS::KEY::GetKey); 
    case 0x445aacdc: return (uint32_t)static_cast<void(*)(unsigned short*, int)>(BIOS::LCD::BufferRead); 
    case 0xb5c731e5: return (uint32_t)static_cast<uint16_t(*)()>(BIOS::LCD::BufferRead); 
    case 0x0418809c: return (uint32_t)static_cast<void(*)(CRect const&)>(BIOS::LCD::BufferBegin); 
    case 0xb10c536c: return (uint32_t)static_cast<void(*)(unsigned short*, int)>(BIOS::LCD::BufferWrite); 
    case 0x49bdf473: return (uint32_t)static_cast<void(*)(unsigned short)>(BIOS::LCD::BufferWrite); 
    case 0x049fdd57: return (uint32_t)static_cast<void(*)(CRect const&, unsigned short)>(BIOS::LCD::Bar); 
    case 0x57c42438: return (uint32_t)static_cast<void(*)(int, int, int, int, unsigned short)>(BIOS::LCD::Bar); 
    case 0x54af1212: return (uint32_t)static_cast<int(*)(int, int, unsigned short, unsigned short, char const*)>(BIOS::LCD::Draw); 
    case 0x180e2ea8: return (uint32_t)static_cast<void(*)(unsigned short)>(BIOS::LCD::Clear); 
    case 0xf4ce70b2: return (uint32_t)static_cast<int(*)(int, int, unsigned short, unsigned short, char const*)>(BIOS::LCD::Print); 
    case 0x838a2287: return (uint32_t)static_cast<int(*)(int, int, unsigned short, unsigned short, char*)>(BIOS::LCD::Print); 
    case 0x03fc6db7: return (uint32_t)static_cast<int(*)(int, int, unsigned short, unsigned short, char)>(BIOS::LCD::Print); 
    case 0x460c9713: return (uint32_t)static_cast<int(*)(int, int, unsigned short, unsigned short, char const*, ...)>(BIOS::LCD::Printf); 
    case 0x9a8a0782: return (uint32_t)static_cast<void(*)(int, int, int, int, unsigned int)>(BIOS::LCD::Shadow); 
    case 0x6a5c85e9: return (uint32_t)static_cast<void(*)(int, int, int, int, unsigned short const*, int)>(BIOS::LCD::Pattern); 
    case 0x2b9ba624: return (uint32_t)static_cast<uint16_t(*)(int, int)>(BIOS::LCD::GetPixel); 
    case 0x7cfa93bf: return (uint32_t)static_cast<void(*)(CPoint const&, unsigned short)>(BIOS::LCD::PutPixel); 
    case 0xad6a0791: return (uint32_t)static_cast<void(*)(int, int, unsigned short)>(BIOS::LCD::PutPixel); 
    case 0xad1949b8: return (uint32_t)static_cast<void(*)()>(BIOS::LCD::BufferEnd); 
    case 0xa63f701d: return (uint32_t)static_cast<void(*)(CRect const&, unsigned short)>(BIOS::LCD::Rectangle); 
    case 0xe522053e: return (uint32_t)static_cast<void(*)(CRect const&, unsigned short)>(BIOS::LCD::RoundRect); 
    case 0xf7b8709f: return (uint32_t)static_cast<void(*)(int, int, int, int, unsigned short)>(BIOS::LCD::RoundRect); 
    case 0x5a30881d: return (uint32_t)static_cast<void(*)(int)>(BIOS::SYS::Beep); 
    case 0xa765de53: return (uint32_t)static_cast<void(*)(int)>(BIOS::SYS::DelayMs); 
    case 0x8e64893b: return (uint32_t)static_cast<int(*)(unsigned long)>(BIOS::SYS::Execute); 
    case 0x4d446d7c: return (uint32_t)static_cast<uint32_t(*)()>(BIOS::SYS::GetTick); 
    case 0x15e24db4: return (uint32_t)static_cast<void(*)(void*, void*, void*, void*, void (**)(), void (**)(), void (**)())>(BIOS::USB::Initialize); 
    case 0xc9b58030: return (uint32_t)static_cast<void(*)()>(BIOS::USB::InitializeMass); 
    case 0x548a7392: return (uint32_t)static_cast<void(*)(int)>(BIOS::USB::InitializeFinish); 
    case 0x294424be: return (uint32_t)static_cast<void(*)()>(BIOS::USB::InitializeSerial); 
    case 0xfdc7c062: return (uint32_t)static_cast<void(*)()>(BIOS::USB::Enable); 
    case 0x0f974530: return (uint32_t)static_cast<void(*)()>(BIOS::USB::Disable); 
    case 0xa24234b9: return (uint32_t)static_cast<int(*)(BIOS::GPIO::EPin)>(BIOS::GPIO::AnalogRead); 
    case 0x8fdd2172: return (uint32_t)static_cast<void(*)(BIOS::GPIO::EPin, int)>(BIOS::GPIO::AnalogWrite); 
    case 0xfaa84c46: return (uint32_t)static_cast<bool(*)(BIOS::GPIO::EPin)>(BIOS::GPIO::DigitalRead); 
    case 0x77562c58: return (uint32_t)static_cast<void(*)(BIOS::GPIO::EPin, bool)>(BIOS::GPIO::DigitalWrite); 
    case 0x9a034af5: return (uint32_t)static_cast<bool(*)(unsigned char, unsigned char)>(BIOS::GPIO::I2C::RequestFrom); 
    case 0x812b4743: return (uint32_t)static_cast<bool(*)()>(BIOS::GPIO::I2C::EndTransmission); 
    case 0x591badc5: return (uint32_t)static_cast<bool(*)(unsigned char)>(BIOS::GPIO::I2C::BeginTransmission); 
    case 0xd01c088c: return (uint32_t)static_cast<uint8_t(*)()>(BIOS::GPIO::I2C::Read); 
    case 0x5faf3b2e: return (uint32_t)static_cast<bool(*)(unsigned char)>(BIOS::GPIO::I2C::Write); 
    case 0xabaecaeb: return (uint32_t)static_cast<uint8_t(*)()>(BIOS::GPIO::UART::Read); 
    case 0x5fafe25c: return (uint32_t)static_cast<void(*)(int, BIOS::GPIO::UART::EConfig)>(BIOS::GPIO::UART::Setup); 
    case 0xad9a496d: return (uint32_t)static_cast<void(*)(unsigned char)>(BIOS::GPIO::UART::Write); 
    case 0x0a8c2875: return (uint32_t)static_cast<bool(*)()>(BIOS::GPIO::UART::Available); 
    case 0x1d877761: return (uint32_t)static_cast<void(*)(BIOS::GPIO::EPin, BIOS::GPIO::EMode)>(BIOS::GPIO::PinMode); 
    case 0x37f17362: return (uint32_t)static_cast<void(*)()>(BIOS::MEMORY::LinearStart); 
    case 0xa8ff17f6: return (uint32_t)static_cast<bool(*)()>(BIOS::MEMORY::LinearFinish); 
    case 0x7ac18f26: return (uint32_t)static_cast<bool(*)(unsigned long, unsigned char*, int)>(BIOS::MEMORY::LinearProgram); 
    case 0xc2008c6e: return (uint32_t)static_cast<PVOID(*)()>(BIOS::MEMORY::GetSharedBuffer); 
    case 0x2b772287: return (uint32_t)BIOS::PRIVATE::GetCharRom;
    default: return 0;
  }
}

