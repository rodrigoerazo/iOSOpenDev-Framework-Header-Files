/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUWebViewDelegate.h>

@class SUWebView, NSURL, SUStorePageProtocol, SUObjectPool, SSAuthenticationContext, SUStructuredPage, SUTableViewController, SUDelayedNavigationItem, SUItem;

@interface SUWebViewController : SUViewController <SUWebViewDelegate> {
	SSAuthenticationContext *_authenticationContext;	// 212 = 0xd4
	SUDelayedNavigationItem *_delayedNavigationItem;	// 216 = 0xd8
	BOOL _hasEverAppeared;	// 220 = 0xdc
	int _lastKnownOrientation;	// 224 = 0xe0
	SUObjectPool *_objectPool;	// 228 = 0xe4
	SUItem *_rootItem;	// 232 = 0xe8
	int _scheduledOrientation;	// 236 = 0xec
	SUStorePageProtocol *_storePageProtocol;	// 240 = 0xf0
	int _style;	// 244 = 0xf4
	SUStructuredPage *_trackList;	// 248 = 0xf8
	SUTableViewController *_trackListController;	// 252 = 0xfc
	NSURL *_url;	// 256 = 0x100
	BOOL _viewIsReady;	// 260 = 0x104
	SUWebView *_webView;	// 264 = 0x108
}
@property(readonly, assign, nonatomic) SUWebView *webView;	// G=0x28011; 
@property(assign, nonatomic) BOOL viewIsReady;	// G=0x2b16d; S=0x2b17d; @synthesize=_viewIsReady
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext;	// G=0x2b13d; S=0x27fad; @synthesize=_authenticationContext
@property(assign, nonatomic) int style;	// G=0x2b14d; S=0x2b15d; @synthesize=_style
@property(retain) SUStorePageProtocol *storePageProtocol;	// G=0x28f1d; S=0x28ec5; converted property
// declared property setter: - (void)setViewIsReady:(BOOL)ready;	// 0x2b17d
// declared property getter: - (BOOL)viewIsReady;	// 0x2b16d
// declared property setter: - (void)setStyle:(int)style;	// 0x2b15d
// declared property getter: - (int)style;	// 0x2b14d
// declared property getter: - (id)authenticationContext;	// 0x2b13d
- (void)_updateTrackListRootItem;	// 0x2b111
- (void)_setTrackListController:(id)controller;	// 0x2af49
- (void)_setLastKnownOrientation:(int)orientation;	// 0x2af39
- (void)_sendOrientationWillChangeToInterfaceOrientation:(int)_sendOrientation;	// 0x2ae21
- (void)_selectTrackListItemWithIdentifier:(id)identifier;	// 0x2ad41
- (void)_removePlaceholderBackgroundView;	// 0x2ac61
- (void)_reloadUI;	// 0x2a8f9
- (void)_reloadPlaceholderBackgroundView;	// 0x2a729
- (void)_reloadObjectPool;	// 0x2a5ed
- (id)_placeholderBackgroundView;	// 0x2a5ad
- (void)_handleTrackList:(id)list;	// 0x2a4c5
- (void)_handleRootObject:(id)object;	// 0x2a42d
- (void)_handleProtocol:(id)protocol;	// 0x2a2a5
- (void)_applyScriptProperties:(id)properties;	// 0x2a0a5
- (void)_applySavedScrollOffsetIfPossible;	// 0x29ea1
- (void)_addPlaceholderBackgroundView;	// 0x29df5
- (void)operationFinished:(id)finished;	// 0x29cdd
- (void)webViewDidStartLoad:(id)webView;	// 0x29c79
- (void)webViewDidFinishLoad:(id)webView;	// 0x29945
- (void)webView:(id)view willInjectScriptObject:(id)object;	// 0x29905
- (void)webView:(id)view receivedEventOfType:(int)type userInfo:(id)info;	// 0x298e5
- (void)webView:(id)view performPurchaseAnimationWithView:(id)view2;	// 0x297bd
- (void)webView:(id)view foundPropertyList:(id)list ofType:(int)type;	// 0x2977d
- (void)webView:(id)view documentViewDidSetFrame:(CGRect)documentView;	// 0x29725
- (void)webView:(id)view didFailLoadWithError:(id)error;	// 0x296e1
- (BOOL)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x2966d
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x294fd
- (id)parentViewControllerForWebView:(id)webView;	// 0x294f9
- (id)newRotationController;	// 0x29439
- (void)viewWillDisappear:(BOOL)view;	// 0x29391
- (void)viewWillAppear:(BOOL)view;	// 0x29235
- (void)viewDidDisappear:(BOOL)view;	// 0x291a1
- (void)viewDidAppear:(BOOL)view;	// 0x29085
- (void)storePageProtocolDidChange;	// 0x28f6d
// converted property getter: - (id)storePageProtocol;	// 0x28f1d
// converted property setter: - (void)setStorePageProtocol:(id)protocol;	// 0x28ec5
- (void)setScriptProperties:(id)properties;	// 0x28e7d
- (void)_setExistingNavigationItem:(id)item;	// 0x28e29
- (void)reloadWithStorePage:(id)storePage forURL:(id)url;	// 0x28aa9
- (void)parentViewControllerHierarchyDidChange;	// 0x289fd
- (id)navigationItemForScriptInterface;	// 0x28969
- (CGSize)minimumViewSize;	// 0x288e9
- (void)loadView;	// 0x28875
- (void)keyboardWillShowWithInfo:(id)keyboard;	// 0x28821
- (void)keyboardDidHideWithInfo:(id)keyboard;	// 0x287cd
- (void)invalidate;	// 0x28775
- (CGRect)documentBounds;	// 0x28719
- (id)copyObjectForScriptFromPoolWithClass:(Class)aClass;	// 0x28691
- (id)copyScriptProperties;	// 0x284c1
- (id)copyDefaultScriptProperties;	// 0x282d5
- (id)copyArchivableContext;	// 0x281a5
- (void)applicationWillEnterForeground;	// 0x2813d
- (void)applicationDidEnterBackground;	// 0x280d5
// declared property getter: - (id)webView;	// 0x28011
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x27fad
- (id)newViewControllerForTrackList:(id)trackList;	// 0x27f81
- (id)newDataProviderToProcessProtocol;	// 0x27e61
- (void)dealloc;	// 0x27d45
@end