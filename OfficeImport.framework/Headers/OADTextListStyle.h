/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTextListStyle : XXUnknownSuperclass {
@private
	NSMutableArray *mParagraphProperties;	// 4 = 0x4
}
- (id)init;	// 0xbe961
- (id)initWithDefaults;	// 0xaac9d
- (void)dealloc;	// 0x8d1d5
- (id)defaultProperties;	// 0x1ac4c1
- (id)propertiesForListLevel:(unsigned)listLevel;	// 0x84a35
- (void)setPropertiesForListLevel:(unsigned)listLevel properties:(id)properties;	// 0x2a94f1
- (void)setParentTextListStyle:(id)style;	// 0x1af395
- (void)flatten;	// 0x2a94b1
- (void)overrideWithTextStyle:(id)textStyle;	// 0xc49cd
- (void)removeUnnecessaryOverrides;	// 0x2a9471
@end
