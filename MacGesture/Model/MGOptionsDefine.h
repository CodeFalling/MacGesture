#define OPTIONS_LINE_COLOR_ID @"lineColor"
//#define OPTIONS_LINE_COLOR [[NSUserDefaults standardUserDefaults] objectForKey:OPTIONS_LINE_COLOR_ID]?[[NSUserDefaults standardUserDefaults] objectForKey:OPTIONS_LINE_COLOR_ID]:[NSColor blueColor]

@interface MGOptionsDefine:NSObject
+ (void)setLineColor:(NSColor *)color;

+ (NSColor *)getLineColor;
@end