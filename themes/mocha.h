#define PINK 0xf5c2e7ff
#define BLUE 0x89b4faff

static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xcdd6f4ff, 0x1e1e2eff, 0x282a36ff },
	[SchemeSel]  = { 0x1e1e2eff, PINK,       PINK       },
	[SchemeUrg]  = { 0,          0,          0x770000ff },
};
