#import "ViTheme.h"

@interface ViThemeStore : NSObject
{
	NSMutableDictionary *themes;
}
+ (ViTheme *)defaultTheme;
+ (NSFont *)font;
+ (ViThemeStore *)defaultStore;
- (NSArray *)availableThemes;
- (ViTheme *)themeWithName:(NSString *)aName;
- (ViTheme *)defaultTheme;

@end