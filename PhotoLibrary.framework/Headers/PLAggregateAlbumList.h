/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PLAlbumContainer.h>
#import <PhotoLibrary/PLAlbumListChangeObserver.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : XXUnknownSuperclass <PLAlbumListChangeObserver, PLAlbumContainer> {
@private
	NSMutableOrderedSet *_allAlbums;	// 4 = 0x4
	NSMutableOrderedSet *_childAlbumLists;	// 8 = 0x8
	int filter;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *_typeDescription;	// G=0xe4b4d; 
@property(readonly, assign, nonatomic) NSString *_prettyDescription;	// G=0xe4a51; 
@property(assign, nonatomic) int filter;	// G=0xe4b59; S=0xe4b69; @synthesize
+ (NSObject *)albumListWithFilter:(int)filter inPhotoLibrary:(id)photoLibrary;	// 0xe4075
// declared property setter: - (void)setFilter:(int)filter;	// 0xe4b69
// declared property getter: - (int)filter;	// 0xe4b59
// declared property getter: - (id)_typeDescription;	// 0xe4b4d
// declared property getter: - (id)_prettyDescription;	// 0xe4a51
- (id)photoLibrary;	// 0xe4a19
- (BOOL)albumHasFixedOrder:(NSObject *)order;	// 0xe4a15
- (BOOL)canEditAlbums;	// 0xe4a11
- (int)albumListType;	// 0xe4a0d
- (id)managedObjectContext;	// 0xe49d5
- (BOOL)hasAtLeastOneAlbum;	// 0xe49a5
- (id)albums;	// 0xe486d
- (id)identifier;	// 0xe484d
- (void)albumListDidChange:(id)albumList;	// 0xe4375
- (void)_invalidateAllAlbums;	// 0xe4349
- (void)dealloc;	// 0xe4219
- (id)initWithFilter:(int)filter inPhotoLibrary:(id)photoLibrary;	// 0xe40b5
@end
