/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDBar2DType.h>


__attribute__((visibility("hidden")))
@interface CHDBar3DType : CHDBar2DType {
@private
	int mGapDepth;	// 40 = 0x28
	int mShapeType;	// 44 = 0x2c
}
@property(assign) int gapDepth;	// G=0x264735; S=0x1d2445; converted property
@property(assign) int shapeType;	// G=0x1e78e9; S=0x1d2499; converted property
+ (bool)is3DType;	// 0x1e7b09
- (id)initWithChart:(id)chart;	// 0x1d23f5
// converted property getter: - (int)gapDepth;	// 0x264735
// converted property setter: - (void)setGapDepth:(int)depth;	// 0x1d2445
// converted property getter: - (int)shapeType;	// 0x1e78e9
// converted property setter: - (void)setShapeType:(int)type;	// 0x1d2499
@end
