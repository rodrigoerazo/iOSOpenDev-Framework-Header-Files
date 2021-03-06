/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSLock;

@interface SUScriptNotificationObserver : XXUnknownSuperclass {
	NSLock *_lock;	// 4 = 0x4
	CFSetRef _receivers;	// 8 = 0x8
}
- (void)_endObservingNotifications;	// 0x4d4d5
- (void)_dispatchEvent:(id)event forName:(id)name;	// 0x4d431
- (void)_beginObservingNotifications;	// 0x4d32d
- (void)_softwareMapChangedNotification:(id)notification;	// 0x4d311
- (void)_restrictionsChangedNotification:(id)notification;	// 0x4d2f5
- (void)_networkTypeChangedNotification:(id)notification;	// 0x4d2d9
- (void)_memoryWarningNotification:(id)notification;	// 0x4d2bd
- (void)removeEventReceiver:(id)receiver;	// 0x4d241
- (void)addEventReceiver:(id)receiver;	// 0x4d1b1
- (void)dealloc;	// 0x4d135
- (id)init;	// 0x4d0d1
@end
