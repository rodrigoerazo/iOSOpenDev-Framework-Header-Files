/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SSRequestDelegate.h>


@protocol SSPurchaseRequestDelegate <SSRequestDelegate>
@optional
- (void)purchaseRequest:(id)request purchaseDidSucceed:(id)purchase;
- (void)purchaseRequest:(id)request purchaseDidFail:(id)purchase withError:(id)error;
@end
