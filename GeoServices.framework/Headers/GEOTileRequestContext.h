/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/XXUnknownSuperclass.h>

@class GEOTileRequester, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileRequestContext : XXUnknownSuperclass {
	GEOTileKeyList *_fullList;	// 4 = 0x4
	GEOTileKeyList *_networkList;	// 8 = 0x8
	GEOTileRequester *_tileRequester;	// 12 = 0xc
}
@property(retain, nonatomic) GEOTileRequester *tileRequester;	// G=0xf31d; S=0xf32d; @synthesize=_tileRequester
@property(retain, nonatomic) GEOTileKeyList *networkList;	// G=0xf2e9; S=0xf2f9; @synthesize=_networkList
@property(retain, nonatomic) GEOTileKeyList *fullList;	// G=0xf2b5; S=0xf2c5; @synthesize=_fullList
// declared property setter: - (void)setTileRequester:(id)requester;	// 0xf32d
// declared property getter: - (id)tileRequester;	// 0xf31d
// declared property setter: - (void)setNetworkList:(id)list;	// 0xf2f9
// declared property getter: - (id)networkList;	// 0xf2e9
// declared property setter: - (void)setFullList:(id)list;	// 0xf2c5
// declared property getter: - (id)fullList;	// 0xf2b5
- (void)dealloc;	// 0xf249
@end
