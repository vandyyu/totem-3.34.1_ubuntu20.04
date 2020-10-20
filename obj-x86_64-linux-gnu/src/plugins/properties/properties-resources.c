#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.totem_properties"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[1633]; const double alignment; void * const ptr;}  totem_properties_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0310, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0006, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 0005, 0000, 0000, 0000, 
  0005, 0000, 0000, 0000, 0006, 0000, 0000, 0000, 0113, 0120, 0220, 0013, 0002, 0000, 0000, 0000, 
  0310, 0000, 0000, 0000, 0004, 0000, 0114, 0000, 0314, 0000, 0000, 0000, 0320, 0000, 0000, 0000, 
  0235, 0103, 0201, 0115, 0004, 0000, 0000, 0000, 0320, 0000, 0000, 0000, 0015, 0000, 0166, 0000, 
  0340, 0000, 0000, 0000, 0063, 0006, 0000, 0000, 0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 
  0063, 0006, 0000, 0000, 0001, 0000, 0114, 0000, 0064, 0006, 0000, 0000, 0070, 0006, 0000, 0000, 
  0260, 0267, 0044, 0060, 0000, 0000, 0000, 0000, 0070, 0006, 0000, 0000, 0006, 0000, 0114, 0000, 
  0100, 0006, 0000, 0000, 0104, 0006, 0000, 0000, 0044, 0025, 0373, 0355, 0005, 0000, 0000, 0000, 
  0104, 0006, 0000, 0000, 0013, 0000, 0114, 0000, 0120, 0006, 0000, 0000, 0124, 0006, 0000, 0000, 
  0150, 0034, 0114, 0237, 0003, 0000, 0000, 0000, 0124, 0006, 0000, 0000, 0006, 0000, 0114, 0000, 
  0134, 0006, 0000, 0000, 0140, 0006, 0000, 0000, 0157, 0162, 0147, 0057, 0003, 0000, 0000, 0000, 
  0160, 0162, 0157, 0160, 0145, 0162, 0164, 0151, 0145, 0163, 0056, 0165, 0151, 0000, 0000, 0000, 
  0161, 0166, 0000, 0000, 0001, 0000, 0000, 0000, 0170, 0332, 0355, 0135, 0115, 0223, 0243, 0066, 
  0020, 0275, 0357, 0257, 0040, 0134, 0123, 0036, 0033, 0073, 0073, 0331, 0332, 0262, 0275, 0065, 
  0273, 0251, 0231, 0034, 0122, 0271, 0144, 0066, 0125, 0071, 0271, 0004, 0310, 0266, 0142, 0131, 
  0042, 0222, 0360, 0307, 0376, 0372, 0025, 0037, 0236, 0061, 0014, 0306, 0006, 0263, 0001, 0114, 
  0337, 0246, 0260, 0004, 0352, 0326, 0173, 0055, 0272, 0365, 0304, 0214, 0077, 0355, 0326, 0324, 
  0330, 0140, 0041, 0011, 0147, 0023, 0323, 0272, 0033, 0230, 0006, 0146, 0016, 0167, 0011, 0133, 
  0114, 0314, 0257, 0317, 0217, 0275, 0017, 0346, 0247, 0351, 0273, 0361, 0117, 0275, 0236, 0361, 
  0204, 0031, 0026, 0110, 0141, 0327, 0330, 0022, 0265, 0064, 0026, 0024, 0271, 0330, 0030, 0335, 
  0015, 0007, 0167, 0003, 0243, 0327, 0323, 0215, 0010, 0123, 0130, 0314, 0221, 0203, 0247, 0357, 
  0014, 0143, 0054, 0360, 0177, 0076, 0021, 0130, 0032, 0224, 0330, 0023, 0163, 0241, 0126, 0077, 
  0233, 0257, 0017, 0032, 0335, 0131, 0226, 0331, 0017, 0333, 0161, 0373, 0137, 0354, 0050, 0303, 
  0241, 0110, 0312, 0211, 0371, 0244, 0126, 0237, 0371, 0316, 0064, 0210, 0073, 0061, 0067, 0066, 
  0337, 0131, 0146, 0320, 0110, 0067, 0363, 0004, 0367, 0260, 0120, 0173, 0203, 0241, 0065, 0236, 
  0230, 0133, 0342, 0252, 0345, 0054, 0170, 0006, 0226, 0312, 0234, 0216, 0176, 0175, 0077, 0356, 
  0037, 0232, 0144, 0367, 0330, 0020, 0111, 0154, 0212, 0315, 0351, 0263, 0360, 0361, 0271, 0306, 
  0016, 0142, 0263, 0071, 0167, 0174, 0151, 0116, 0037, 0021, 0225, 0147, 0333, 0257, 0221, 0130, 
  0020, 0066, 0263, 0271, 0122, 0174, 0155, 0116, 0255, 0341, 0271, 0016, 0066, 0027, 0056, 0026, 
  0263, 0320, 0014, 0163, 0172, 0177, 0256, 0071, 0027, 0004, 0063, 0205, 0224, 0166, 0236, 0071, 
  0325, 0136, 0124, 0304, 0101, 0364, 0134, 0047, 0351, 0041, 0107, 0317, 0243, 0036, 0316, 0207, 
  0067, 0115, 0235, 0045, 0241, 0156, 0364, 0167, 0356, 0034, 0054, 0302, 0111, 0247, 0263, 0140, 
  0056, 0314, 0103, 0373, 0202, 0316, 0055, 0343, 0340, 0322, 0116, 0310, 0165, 0304, 0175, 0146, 
  0353, 0204, 0057, 0262, 0375, 0361, 0007, 0262, 0061, 0215, 0074, 0142, 0157, 0266, 0336, 0354, 
  0340, 0026, 0032, 0136, 0077, 0356, 0133, 0302, 0067, 0145, 0375, 0223, 0325, 0057, 0032, 0220, 
  0241, 0004, 0142, 0222, 0042, 0205, 0364, 0203, 0047, 0346, 0036, 0353, 0333, 0104, 0364, 0245, 
  0227, 0336, 0310, 0227, 0170, 0246, 0121, 0275, 0362, 0275, 0142, 0003, 0337, 0041, 0112, 0026, 
  0172, 0176, 0006, 0047, 0073, 0040, 0245, 0004, 0261, 0175, 0205, 0145, 0362, 0207, 0343, 0237, 
  0016, 0054, 0307, 0144, 0261, 0124, 0072, 0156, 0040, 0352, 0207, 0244, 0241, 0156, 0024, 0065, 
  0216, 0372, 0364, 0263, 0357, 0067, 0356, 0107, 0223, 0230, 0270, 0246, 0161, 0260, 0322, 0100, 
  0310, 0267, 0000, 0357, 0074, 0304, 0334, 0202, 0176, 0237, 0023, 0112, 0213, 0071, 0312, 0343, 
  0222, 0104, 0120, 0076, 0341, 0052, 0175, 0065, 0075, 0334, 0161, 0077, 0205, 0325, 0113, 0260, 
  0373, 0044, 0210, 0233, 0040, 0163, 0223, 0360, 0052, 0370, 0166, 0226, 0117, 0317, 0314, 0247, 
  0161, 0352, 0257, 0331, 0153, 0307, 0267, 0361, 0366, 0264, 0203, 0316, 0022, 0134, 0021, 0105, 
  0161, 0046, 0263, 0113, 0173, 0353, 0032, 0217, 0345, 0054, 0067, 0122, 0041, 0241, 0362, 0254, 
  0057, 0026, 0041, 0236, 0003, 0303, 0077, 0026, 0271, 0327, 0245, 0101, 0242, 0124, 0240, 0070, 
  0023, 0054, 0062, 0003, 0206, 0124, 0173, 0075, 0027, 0207, 0170, 0101, 0224, 0176, 0206, 0223, 
  0216, 0030, 0171, 0121, 0343, 0160, 0133, 0307, 0301, 0122, 0317, 0053, 0241, 0044, 0153, 0124, 
  0341, 0333, 0015, 0015, 0027, 0042, 0103, 0355, 0275, 0203, 0123, 0173, 0163, 0056, 0264, 0143, 
  0365, 0334, 0140, 0025, 0303, 0350, 0304, 0263, 0363, 0156, 0237, 0025, 0270, 0116, 0007, 0257, 
  0314, 0031, 0306, 0163, 0065, 0323, 0366, 0041, 0147, 0171, 0316, 0275, 0251, 0236, 0212, 0173, 
  0227, 0164, 0314, 0210, 0114, 0231, 0321, 0251, 0044, 0001, 0065, 0250, 0211, 0124, 0135, 0144, 
  0340, 0103, 0150, 0071, 0120, 0260, 0042, 0012, 0106, 0100, 0152, 0061, 0007, 0255, 0332, 0070, 
  0350, 0372, 0042, 0164, 0156, 0027, 0131, 0370, 0133, 0154, 0073, 0360, 0260, 0042, 0036, 0036, 
  0300, 0324, 0142, 0046, 0376, 0122, 0033, 0023, 0367, 0030, 0211, 0056, 0262, 0360, 0037, 0155, 
  0067, 0060, 0260, 0042, 0006, 0006, 0040, 0152, 0061, 0373, 0106, 0365, 0275, 0213, 0122, 0333, 
  0137, 0167, 0362, 0125, 0064, 0060, 0034, 0370, 0127, 0325, 0233, 0150, 0340, 0315, 0026, 0023, 
  0160, 0130, 0033, 0001, 0243, 0064, 0372, 0377, 0241, 0136, 0321, 0256, 0161, 0130, 0370, 0312, 
  0126, 0214, 0157, 0131, 0221, 0236, 0133, 0201, 0112, 0260, 0104, 0142, 0252, 0375, 0204, 0112, 
  0231, 0211, 0051, 0045, 0236, 0044, 0337, 0164, 0127, 0314, 0334, 0037, 0300, 0315, 0122, 0054, 
  0241, 0330, 0355, 0331, 0373, 0124, 0321, 0044, 0016, 0267, 0265, 0263, 0305, 0152, 0153, 0351, 
  0004, 0350, 0322, 0021, 0272, 0044, 0052, 0145, 0355, 0345, 0213, 0125, 0357, 0353, 0035, 0320, 
  0245, 0053, 0164, 0071, 0172, 0231, 0157, 0057, 0133, 0206, 0265, 0226, 0042, 0156, 0216, 0054, 
  0267, 0017, 0373, 0243, 0012, 0122, 0173, 0121, 0077, 0252, 0275, 0024, 0336, 0154, 0344, 0017, 
  0014, 0211, 0035, 0316, 0134, 0011, 0330, 0077, 0306, 0176, 0152, 0037, 0243, 0275, 0370, 0257, 
  0257, 0000, 0355, 0360, 0365, 0032, 0263, 0116, 0356, 0307, 0176, 0211, 0114, 0207, 0062, 0130, 
  0105, 0145, 0260, 0030, 0112, 0055, 0056, 0204, 0275, 0257, 0233, 0206, 0220, 0254, 0164, 0144, 
  0345, 0112, 0206, 0335, 0366, 0056, 0134, 0165, 0062, 0206, 0051, 0104, 0030, 0026, 0335, 0134, 
  0272, 0142, 0343, 0077, 0336, 0304, 0002, 0324, 0224, 0370, 0177, 0137, 0077, 0232, 0233, 0212, 
  0343, 0172, 0122, 0360, 0013, 0020, 0333, 0224, 0110, 0130, 0011, 0166, 0132, 0244, 0153, 0267, 
  0312, 0352, 0332, 0323, 0066, 0276, 0265, 0257, 0260, 0155, 0305, 0354, 0052, 0244, 0325, 0117, 
  0331, 0223, 0260, 0345, 0342, 0163, 0066, 0033, 0342, 0142, 0016, 0247, 0154, 0222, 0247, 0154, 
  0042, 0247, 0264, 0350, 0214, 0315, 0337, 0301, 0200, 0341, 0204, 0115, 0167, 0117, 0330, 0204, 
  0210, 0205, 0363, 0065, 0371, 0365, 0124, 0242, 0363, 0232, 0340, 0030, 0250, 0354, 0244, 0270, 
  0370, 0305, 0172, 0250, 0052, 0125, 0045, 0057, 0176, 0161, 0051, 0034, 0267, 0051, 0301, 0307, 
  0215, 0303, 0135, 0354, 0164, 0063, 0107, 0326, 0206, 0003, 0015, 0053, 0242, 0141, 0204, 0043, 
  0070, 0155, 0123, 0202, 0202, 0163, 0241, 0007, 0023, 0174, 0133, 0241, 0213, 0054, 0174, 0074, 
  0030, 0017, 0114, 0254, 0210, 0211, 0057, 0160, 0002, 0305, 0161, 0231, 0365, 0320, 0046, 0252, 
  0253, 0134, 0374, 0034, 0231, 0016, 0114, 0254, 0152, 0115, 0014, 0053, 0030, 0061, 0240, 0340, 
  0000, 0316, 0125, 0331, 0142, 0323, 0365, 0067, 0073, 0143, 0000, 0073, 0230, 0011, 0355, 0115, 
  0072, 0321, 0007, 0105, 0177, 0331, 0354, 0254, 0331, 0330, 0377, 0263, 0377, 0000, 0310, 0077, 
  0106, 0176, 0042, 0245, 0006, 0135, 0376, 0025, 0011, 0121, 0323, 0203, 0176, 0070, 0120, 0151, 
  0350, 0337, 0142, 0375, 0045, 0020, 0341, 0230, 0010, 0351, 0304, 0026, 0124, 0367, 0045, 0126, 
  0200, 0304, 0073, 0144, 0303, 0371, 0260, 0262, 0075, 0120, 0040, 0047, 0327, 0202, 0144, 0072, 
  0331, 0161, 0005, 0076, 0310, 0027, 0152, 0225, 0057, 0130, 0077, 0110, 0276, 0200, 0174, 0227, 
  0200, 0174, 0041, 0045, 0137, 0210, 0234, 0322, 0042, 0371, 0302, 0103, 0060, 0140, 0220, 0057, 
  0164, 0127, 0276, 0020, 0042, 0026, 0344, 0013, 0271, 0324, 0226, 0150, 0355, 0321, 0316, 0156, 
  0326, 0374, 0025, 0132, 0157, 0100, 0221, 0270, 0302, 0042, 0361, 0053, 0242, 0140, 0277, 0346, 
  0052, 0102, 0066, 0075, 0071, 0372, 0375, 0133, 0203, 0124, 0321, 0225, 0045, 0070, 0157, 0002, 
  0042, 0044, 0371, 0045, 0076, 0104, 0001, 0233, 0216, 0260, 0236, 0124, 0365, 0261, 0261, 0060, 
  0357, 0200, 0115, 0307, 0053, 0330, 0230, 0360, 0040, 0224, 0334, 0332, 0366, 0235, 0027, 0050, 
  0271, 0135, 0315, 0000, 0020, 0205, 0302, 0132, 0124, 0305, 0132, 0324, 0166, 0121, 0350, 0240, 
  0146, 0012, 0302, 0316, 0177, 0273, 0226, 0236, 0333, 0330, 0371, 0257, 0017, 0365, 0316, 0022, 
  0061, 0206, 0151, 0047, 0317, 0006, 0175, 0211, 0155, 0207, 0325, 0247, 0252, 0357, 0315, 0304, 
  0016, 0205, 0103, 0011, 0127, 0060, 0261, 0351, 0371, 0317, 0201, 0065, 0267, 0130, 0133, 0113, 
  0105, 0303, 0216, 0113, 0311, 0100, 0074, 0120, 0253, 0170, 0140, 0130, 0104, 0074, 0360, 0152, 
  0307, 0270, 0177, 0364, 0217, 0141, 0277, 0003, 0147, 0137, 0153, 0062, 0000, 0050, 0165, 0165, 
  0141, 0171, 0051, 0057, 0000, 0000, 0000, 0000, 0147, 0156, 0157, 0155, 0145, 0057, 0000, 0000, 
  0005, 0000, 0000, 0000, 0160, 0162, 0157, 0160, 0145, 0162, 0164, 0151, 0145, 0163, 0057, 0000, 
  0001, 0000, 0000, 0000, 0164, 0157, 0164, 0145, 0155, 0057, 0000, 0000, 0004, 0000, 0000, 0000
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[1633]; const double alignment; void * const ptr;}  totem_properties_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\310\000\000\000\000\000\000\050\006\000\000\000"
  "\000\000\000\000\000\000\000\000\002\000\000\000\005\000\000\000"
  "\005\000\000\000\006\000\000\000\113\120\220\013\002\000\000\000"
  "\310\000\000\000\004\000\114\000\314\000\000\000\320\000\000\000"
  "\235\103\201\115\004\000\000\000\320\000\000\000\015\000\166\000"
  "\340\000\000\000\063\006\000\000\324\265\002\000\377\377\377\377"
  "\063\006\000\000\001\000\114\000\064\006\000\000\070\006\000\000"
  "\260\267\044\060\000\000\000\000\070\006\000\000\006\000\114\000"
  "\100\006\000\000\104\006\000\000\044\025\373\355\005\000\000\000"
  "\104\006\000\000\013\000\114\000\120\006\000\000\124\006\000\000"
  "\150\034\114\237\003\000\000\000\124\006\000\000\006\000\114\000"
  "\134\006\000\000\140\006\000\000\157\162\147\057\003\000\000\000"
  "\160\162\157\160\145\162\164\151\145\163\056\165\151\000\000\000"
  "\161\166\000\000\001\000\000\000\170\332\355\135\115\223\243\066"
  "\020\275\357\257\040\134\123\036\033\073\073\331\332\262\275\065"
  "\273\251\231\034\122\271\144\066\125\071\271\004\310\266\142\131"
  "\042\222\360\307\376\372\025\037\236\061\014\306\006\263\001\114"
  "\337\246\260\004\352\326\173\055\272\365\304\214\077\355\326\324"
  "\330\140\041\011\147\023\323\272\033\230\006\146\016\167\011\133"
  "\114\314\257\317\217\275\017\346\247\351\273\361\117\275\236\361"
  "\204\031\026\110\141\327\330\022\265\064\026\024\271\330\030\335"
  "\015\007\167\003\243\327\323\215\010\123\130\314\221\203\247\357"
  "\014\143\054\360\177\076\021\130\032\224\330\023\163\241\126\077"
  "\233\257\017\032\335\131\226\331\017\333\161\373\137\354\050\303"
  "\241\110\312\211\371\244\126\237\371\316\064\210\073\061\067\066"
  "\337\131\146\320\110\067\363\004\367\260\120\173\203\241\065\236"
  "\230\133\342\252\345\054\170\006\226\312\234\216\176\175\077\356"
  "\037\232\144\367\330\020\111\154\212\315\351\263\360\361\271\306"
  "\016\142\263\071\167\174\151\116\037\021\225\147\333\257\221\130"
  "\020\066\263\271\122\174\155\116\255\341\271\016\066\027\056\026"
  "\263\320\014\163\172\177\256\071\027\004\063\205\224\166\236\071"
  "\325\136\124\304\101\364\134\047\351\041\107\317\243\036\316\207"
  "\067\115\235\045\241\156\364\167\356\034\054\302\111\247\263\140"
  "\056\314\103\373\202\316\055\343\340\322\116\310\165\304\175\146"
  "\353\204\057\262\375\361\007\262\061\215\074\142\157\266\336\354"
  "\340\026\032\136\077\356\133\302\067\145\375\223\325\057\032\220"
  "\241\004\142\222\042\205\364\203\047\346\036\353\333\104\364\245"
  "\227\336\310\227\170\246\121\275\362\275\142\003\337\041\112\026"
  "\172\176\006\047\073\040\245\004\261\175\205\145\362\207\343\237"
  "\016\054\307\144\261\124\072\156\040\352\207\244\241\156\024\065"
  "\216\372\364\263\357\067\356\107\223\230\270\246\161\260\322\100"
  "\310\267\000\357\074\304\334\202\176\237\023\112\213\071\312\343"
  "\222\104\120\076\341\052\175\065\075\334\161\077\205\325\113\260"
  "\373\044\210\233\040\163\223\360\052\370\166\226\117\317\314\247"
  "\161\352\257\331\153\307\267\361\366\264\203\316\022\134\021\105"
  "\161\046\263\113\173\353\032\217\345\054\067\122\041\241\362\254"
  "\057\026\041\236\003\303\077\026\271\327\245\101\242\124\240\070"
  "\023\054\062\003\206\124\173\075\027\207\170\101\224\176\206\223"
  "\216\030\171\121\343\160\133\307\301\122\317\053\241\044\153\124"
  "\341\333\015\015\027\042\103\355\275\203\123\173\163\056\264\143"
  "\365\334\140\025\303\350\304\263\363\156\237\025\270\116\007\257"
  "\314\031\306\163\065\323\366\041\147\171\316\275\251\236\212\173"
  "\227\164\314\210\114\231\321\251\044\001\065\250\211\124\135\144"
  "\340\103\150\071\120\260\042\012\106\100\152\061\007\255\332\070"
  "\350\372\042\164\156\027\131\370\133\154\073\360\260\042\036\036"
  "\300\324\142\046\376\122\033\023\367\030\211\056\262\360\037\155"
  "\067\060\260\042\006\006\040\152\061\373\106\365\275\213\122\333"
  "\137\167\362\125\064\060\034\370\127\325\233\150\340\315\026\023"
  "\160\130\033\001\243\064\372\377\241\136\321\256\161\130\370\312"
  "\126\214\157\131\221\236\133\201\112\260\104\142\252\375\204\112"
  "\231\211\051\045\236\044\337\164\127\314\334\037\300\315\122\054"
  "\241\330\355\331\373\124\321\044\016\267\265\263\305\152\153\351"
  "\004\350\322\021\272\044\052\145\355\345\213\125\357\353\035\320"
  "\245\053\164\071\172\231\157\057\133\206\265\226\042\156\216\054"
  "\267\017\373\243\012\122\173\121\077\252\275\024\336\154\344\017"
  "\014\211\035\316\134\011\330\077\306\176\152\037\243\275\370\257"
  "\257\000\355\360\365\032\263\116\356\307\176\211\114\207\062\130"
  "\105\145\260\030\112\055\056\204\275\257\233\206\220\254\164\144"
  "\345\112\206\335\366\056\134\165\062\206\051\104\030\026\335\134"
  "\272\142\343\077\336\304\002\324\224\370\177\137\077\232\233\212"
  "\343\172\122\360\013\020\333\224\110\130\011\166\132\244\153\267"
  "\312\352\332\323\066\276\265\257\260\155\305\354\052\244\325\117"
  "\331\223\260\345\342\163\066\033\342\142\016\247\154\222\247\154"
  "\042\247\264\350\214\315\337\301\200\341\204\115\167\117\330\204"
  "\210\205\363\065\371\365\124\242\363\232\340\030\250\354\244\270"
  "\370\305\172\250\052\125\045\057\176\161\051\034\267\051\301\307"
  "\215\303\135\354\164\063\107\326\206\003\015\053\242\141\204\043"
  "\070\155\123\202\202\163\241\007\023\174\133\241\213\054\174\074"
  "\030\017\114\254\210\211\057\160\002\305\161\231\365\320\046\252"
  "\253\134\374\034\231\016\114\254\152\115\014\053\030\061\240\340"
  "\000\316\125\331\142\323\365\067\073\143\000\073\230\011\355\115"
  "\072\321\007\105\177\331\354\254\331\330\377\263\377\000\310\077"
  "\106\176\042\245\006\135\376\025\011\121\323\203\176\070\120\151"
  "\350\337\142\375\045\020\341\230\010\351\304\026\124\367\045\126"
  "\200\304\073\144\303\371\260\262\075\120\040\047\327\202\144\072"
  "\331\161\005\076\310\027\152\225\057\130\077\110\276\200\174\227"
  "\200\174\041\045\137\210\234\322\042\371\302\103\060\140\220\057"
  "\164\127\276\020\042\026\344\013\271\324\226\150\355\321\316\156"
  "\326\374\025\132\157\100\221\270\302\042\361\053\242\140\277\346"
  "\052\102\066\075\071\372\375\133\203\124\321\225\045\070\157\002"
  "\042\044\371\045\076\104\001\233\216\260\236\124\365\261\261\060"
  "\357\200\115\307\053\330\230\360\040\224\334\332\366\235\027\050"
  "\271\135\315\000\020\205\302\132\124\305\132\324\166\121\350\240"
  "\146\012\302\316\177\273\226\236\333\330\371\257\017\365\316\022"
  "\061\206\151\047\317\006\175\211\155\207\325\247\252\357\315\304"
  "\016\205\103\011\127\060\261\351\371\317\201\065\267\130\133\113"
  "\105\303\216\113\311\100\074\120\253\170\140\130\104\074\360\152"
  "\307\270\177\364\217\141\277\003\147\137\153\062\000\050\165\165"
  "\141\171\051\057\000\000\000\000\147\156\157\155\145\057\000\000"
  "\005\000\000\000\160\162\157\160\145\162\164\151\145\163\057\000"
  "\001\000\000\000\164\157\164\145\155\057\000\000\004\000\000\000"
  "" };
#endif /* !_MSC_VER */

static GStaticResource static_resource = { totem_properties_resource_data.data, sizeof (totem_properties_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };
G_GNUC_INTERNAL GResource *totem_properties_get_resource (void);
GResource *totem_properties_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for Win32 (x86) and x64 programs, as symbols on Win32 are prefixed
 * with an underscore but symbols on x64 are not.
 */
#ifdef _WIN64
#define G_MSVC_SYMBOL_PREFIX ""
#else
#define G_MSVC_SYMBOL_PREFIX "_"
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
