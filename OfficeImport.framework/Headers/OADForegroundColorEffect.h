/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADForegroundColorEffect : OADBlipEffect {
@private
	OADColor *mForegroundColor;	// 8 = 0x8
}
@property(retain) id foregroundColor;	// G=0x29d819; S=0xc76a1; converted property
- (id)init;	// 0xc7685
- (id)copyWithZone:(NSZone *)zone;	// 0x29e195
- (void)dealloc;	// 0xd0551
// converted property getter: - (id)foregroundColor;	// 0x29d819
// converted property setter: - (void)setForegroundColor:(id)color;	// 0xc76a1
- (void)setStyleColor:(id)color;	// 0x29e321
- (unsigned)hash;	// 0x29e2d9
- (BOOL)isEqual:(id)equal;	// 0x29e21d
@end
