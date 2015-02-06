//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

#import "UXToolbarDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UXEventTracker, UXNavigationBar, UXToolbar, UXTransitionController, _UXContainerView, _UXViewControllerOneToOneTransitionContext;

@interface UXNavigationController : UXViewController <UXToolbarDelegate>
{
    UXNavigationBar *_navigationBar;
    UXToolbar *_accessoryBar;
    UXToolbar *_toolbar;
    struct {
        unsigned int willShowViewController:1;
        unsigned int didShowViewController:1;
        unsigned int interactionControllerForAnimationController:1;
        unsigned int animationControllerForOperation:1;
        unsigned int shouldBeginInteractivePopFromViewControllerToViewController:1;
    } _delegateFlags;
    BOOL _navigationBarHidden;
    BOOL _navigationBarDetached;
    BOOL _toolbarHidden;
    BOOL __fullScreenMode;
    BOOL __locked;
    BOOL __hidesBackTitles;
    BOOL __backBarButtonItemBordered;
    BOOL _isTransitioning;
    BOOL _isInteractive;
    id <UXNavigationControllerDelegate> _delegate;
    UXEventTracker *_interactivePopEventTracker;
    double __leftContentInset;
    long long __toolbarPosition;
    unsigned long long __defaultPushTransition;
    unsigned long long __defaultPopTransition;
    id <_UXAccessoryBarContainer> _accessoryBarContainer;
    NSMutableArray *_internalViewControllers;
    _UXContainerView *_containerView;
    NSMutableArray *_addedConstraints;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_navigationBarTopConstraint;
    NSArray *_navigationBarConstraints;
    NSLayoutConstraint *_toolbarVerticalConstraint;
    NSLayoutConstraint *_toolbarLeftConstraint;
    NSLayoutConstraint *_topViewControllerLeftConstraint;
    NSArray *_topViewControllerOtherConstraints;
    _UXViewControllerOneToOneTransitionContext *_currentTransitionContext;
    long long _currentOperation;
    UXTransitionController *_defaultTransitionController;
    UXViewController *_observedViewController;
    UXViewController *_provisionalPreviousViewController;
}

+ (id)keyPathsForValuesAffectingPreferredContentSize;
@property(retain, nonatomic) UXViewController *provisionalPreviousViewController; // @synthesize provisionalPreviousViewController=_provisionalPreviousViewController;
@property(nonatomic) __weak UXViewController *observedViewController; // @synthesize observedViewController=_observedViewController;
@property(retain, nonatomic) UXTransitionController *defaultTransitionController; // @synthesize defaultTransitionController=_defaultTransitionController;
@property(nonatomic) long long currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain, nonatomic) _UXViewControllerOneToOneTransitionContext *currentTransitionContext; // @synthesize currentTransitionContext=_currentTransitionContext;
@property(retain, nonatomic) NSArray *topViewControllerOtherConstraints; // @synthesize topViewControllerOtherConstraints=_topViewControllerOtherConstraints;
@property(retain, nonatomic) NSLayoutConstraint *topViewControllerLeftConstraint; // @synthesize topViewControllerLeftConstraint=_topViewControllerLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolbarLeftConstraint; // @synthesize toolbarLeftConstraint=_toolbarLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolbarVerticalConstraint; // @synthesize toolbarVerticalConstraint=_toolbarVerticalConstraint;
@property(retain, nonatomic) NSArray *navigationBarConstraints; // @synthesize navigationBarConstraints=_navigationBarConstraints;
@property(retain, nonatomic) NSLayoutConstraint *navigationBarTopConstraint; // @synthesize navigationBarTopConstraint=_navigationBarTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSMutableArray *addedConstraints; // @synthesize addedConstraints=_addedConstraints;
@property(retain, nonatomic) _UXContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSMutableArray *internalViewControllers; // @synthesize internalViewControllers=_internalViewControllers;
@property(readonly, nonatomic) BOOL isInteractive; // @synthesize isInteractive=_isInteractive;
@property(readonly, nonatomic) BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic, setter=_setBackBarButtonItemBordered:) BOOL _backBarButtonItemBordered; // @synthesize _backBarButtonItemBordered=__backBarButtonItemBordered;
@property(nonatomic, setter=_setHidesBackTitles:) BOOL _hidesBackTitles; // @synthesize _hidesBackTitles=__hidesBackTitles;
@property(nonatomic) __weak id <_UXAccessoryBarContainer> accessoryBarContainer; // @synthesize accessoryBarContainer=_accessoryBarContainer;
@property(nonatomic, setter=_setDefaultPopTransition:) unsigned long long _defaultPopTransition; // @synthesize _defaultPopTransition=__defaultPopTransition;
@property(nonatomic, setter=_setDefaultPushTransition:) unsigned long long _defaultPushTransition; // @synthesize _defaultPushTransition=__defaultPushTransition;
@property(nonatomic, setter=_setToolbarPosition:) long long _toolbarPosition; // @synthesize _toolbarPosition=__toolbarPosition;
@property(nonatomic, setter=_setLeftContentInset:) double _leftContentInset; // @synthesize _leftContentInset=__leftContentInset;
@property(nonatomic, getter=_isLocked, setter=_setLocked:) BOOL _locked; // @synthesize _locked=__locked;
@property(nonatomic, getter=_isFullScreenMode, setter=_setFullScreenMode:) BOOL _fullScreenMode; // @synthesize _fullScreenMode=__fullScreenMode;
@property(readonly, nonatomic) UXEventTracker *interactivePopEventTracker; // @synthesize interactivePopEventTracker=_interactivePopEventTracker;
@property(nonatomic) __weak id <UXNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isToolbarHidden) BOOL toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
@property(nonatomic, getter=isNavigationBarDetached) BOOL navigationBarDetached; // @synthesize navigationBarDetached=_navigationBarDetached;
@property(nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
- (void)cxx_destruct;
- (long long)positionForBar:(id)arg1;
- (void)_endObservingTopViewController;
- (void)_beginObservingTopViewController;
- (id)_backItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 operation:(long long)arg3;
- (void)_addBackBarItemFromNavigationItem:(id)arg1 toNavigationItem:(id)arg2;
- (void)_setupLayoutGuidesForViewController:(id)arg1;
- (id)_customInteractionControllerForAnimationController:(id)arg1 transition:(unsigned long long)arg2;
- (id)_customAnimationControllerForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 transition:(unsigned long long)arg4;
- (id)_contextForTransitionOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 transition:(unsigned long long)arg4;
- (void)_handleInteractiveUpdateWithEvent:(id)arg1;
- (void)_beginTransitionWithContext:(id)arg1 operation:(long long)arg2;
- (void)_removeConstraintsForContainedView:(id)arg1;
- (void)_addConstraintsForContainedView:(id)arg1 leftInset:(double)arg2;
- (void)_prepareViewController:(id)arg1 forAnimationInContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_popToViewController:(id)arg1 transition:(unsigned long long)arg2;
- (void)_pushViewController:(id)arg1 transition:(unsigned long long)arg2;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)visibleViewController;
- (id)topViewController;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)detachNavigationBar;
- (void)__back:(id)arg1;
@property(readonly, nonatomic) UXToolbar *toolbar;
@property(readonly, nonatomic) UXToolbar *accessoryBar;
@property(readonly, nonatomic, getter=isAccessoryBarHidden) BOOL accessoryBarHidden;
@property(readonly, nonatomic) UXNavigationBar *navigationBar;
- (id)_accessoryViewController;
- (double)_hiddenToolbarOffset;
- (double)_visibleToolbarOffset;
- (void)_setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 animateSubtree:(BOOL)arg4;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setAccessoryBarHidden:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)setEdgesForExtendedLayout:(unsigned long long)arg1;
- (id)transitionCoordinator;
- (BOOL)_requiresWindowForTransitionPreparation;
- (void)_prepareForAnimationInContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct NSEdgeInsets)_intrinsicLayoutInsetsForChildViewController:(id)arg1;
- (id)_verticalToolbarLayoutConstraint;
- (void)invalidateIntrinsicLayoutInsets;
- (struct NSEdgeInsets)intrinsicLayoutInsets;
- (struct CGSize)preferredContentSize;
- (id)preferredFirstResponder;
- (void)updateViewConstraints;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)scrollWheel:(id)arg1;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

