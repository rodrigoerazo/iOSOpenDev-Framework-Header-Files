/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADProperties.h>

@class PDTransitionOptions;

__attribute__((visibility("hidden")))
@interface PDTransition : OADProperties {
@private
	BOOL mHasType;	// 12 = 0xc
	int mType;	// 16 = 0x10
	BOOL mHasSpeed;	// 20 = 0x14
	int mSpeed;	// 24 = 0x18
	BOOL mHasAdvanceOnClick;	// 28 = 0x1c
	BOOL mIsAdvanceOnClick;	// 29 = 0x1d
	BOOL mHasAdvanceAfterTime;	// 30 = 0x1e
	int mAdvanceAfterTime;	// 32 = 0x20
	PDTransitionOptions *mOptions;	// 36 = 0x24
}
@property(assign) int type;	// G=0x1d1505; S=0x149791; converted property
@property(assign) BOOL isAdvanceOnClick;	// G=0x21c101; S=0x1496c1; converted property
@property(assign) int speed;	// G=0x21c099; S=0x14969d; converted property
@property(assign) int advanceAfterTime;	// G=0x21c031; S=0x1496e5; converted property
@property(retain) id options;	// G=0x21bfc9; S=0x149a69; converted property
- (id)init;	// 0x14965d
- (void)dealloc;	// 0x14e1f9
- (BOOL)hasType;	// 0x1bbe11
// converted property getter: - (int)type;	// 0x1d1505
// converted property setter: - (void)setType:(int)type;	// 0x149791
- (BOOL)hasIsAdvanceOnClick;	// 0x21c131
// converted property getter: - (BOOL)isAdvanceOnClick;	// 0x21c101
// converted property setter: - (void)setIsAdvanceOnClick:(BOOL)click;	// 0x1496c1
- (BOOL)hasSpeed;	// 0x21c0c9
// converted property getter: - (int)speed;	// 0x21c099
// converted property setter: - (void)setSpeed:(int)speed;	// 0x14969d
- (BOOL)hasAdvanceAfterTime;	// 0x21c061
// converted property getter: - (int)advanceAfterTime;	// 0x21c031
// converted property setter: - (void)setAdvanceAfterTime:(int)time;	// 0x1496e5
- (BOOL)hasTransitionOptions;	// 0x21bff9
// converted property getter: - (id)options;	// 0x21bfc9
// converted property setter: - (void)setOptions:(id)options;	// 0x149a69
@end