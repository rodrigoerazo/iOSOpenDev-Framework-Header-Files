/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>

@class NSString, UINavigationItem, IUModalContext;

@interface IUiPodNavigationController : XXUnknownSuperclass {
	IUModalContext *_modalContext;	// 232 = 0xe8
	UINavigationItem *_navigationItemTemplate;	// 236 = 0xec
}
@property(readonly, assign, nonatomic) NSString *rootIdentifier;	// G=0x7fe69; 
@property(retain, nonatomic) IUModalContext *modalContext;	// G=0x80591; S=0x7fee1; @synthesize=_modalContext
// declared property getter: - (id)modalContext;	// 0x80591
- (void)_updateViewControllersModalContext;	// 0x8048d
- (BOOL)_shouldNavigationBarInsetViewController:(id)controller;	// 0x80415
- (id)popToViewController:(id)viewController animated:(BOOL)animated;	// 0x80351
- (id)popToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;	// 0x8028d
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x801c9
- (void)pushViewController:(id)controller animated:(BOOL)animated;	// 0x7fffd
- (id)description;	// 0x7ff8d
- (void)loadView;	// 0x7ff39
// declared property setter: - (void)setModalContext:(id)context;	// 0x7fee1
// declared property getter: - (id)rootIdentifier;	// 0x7fe69
- (void)dealloc;	// 0x7fdf1
@end
