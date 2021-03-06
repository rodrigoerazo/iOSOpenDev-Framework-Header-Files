/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSMutableDictionary, NSArray;

@interface SUVariableCellConfigurationCache : XXUnknownSuperclass {
	NSMutableDictionary *_caches;	// 4 = 0x4
	id _cellContext;	// 8 = 0x8
	float _tableHeight;	// 12 = 0xc
}
@property(retain, nonatomic) id cellContext;	// G=0x1fc45; S=0x1fc55; @synthesize=_cellContext
@property(readonly, assign, nonatomic) NSArray *caches;	// G=0x1fa8d; 
// declared property setter: - (void)setCellContext:(id)context;	// 0x1fc55
// declared property getter: - (id)cellContext;	// 0x1fc45
- (void)resetLayoutCaches;	// 0x1fb69
- (void)reset;	// 0x1faad
// declared property getter: - (id)caches;	// 0x1fa8d
- (id)cacheForClass:(Class)aClass;	// 0x1f9a9
- (void)dealloc;	// 0x1f931
- (id)initWithTableHeight:(float)tableHeight;	// 0x1f8fd
@end
