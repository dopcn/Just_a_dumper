//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WETouchableViewDelegate-Protocol.h"

@class NSArray, NSString, UIView, UIViewController, WEPopoverContainerViewProperties, WETouchableView;
@protocol NSObject, WEPopoverControllerDelegate;

@interface WEPopoverController : NSObject <WETouchableViewDelegate>
{
    UIViewController *contentViewController;
    UIView *view;
    UIView *parentView;
    WETouchableView *backgroundView;
    _Bool popoverVisible;
    unsigned long long popoverArrowDirection;
    id <WEPopoverControllerDelegate> delegate;
    struct CGSize popoverContentSize;
    WEPopoverContainerViewProperties *containerViewProperties;
    id <NSObject> context;
    NSArray *passthroughViews;
}

@property(retain, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context;
@property(retain, nonatomic) WEPopoverContainerViewProperties *containerViewProperties; // @synthesize containerViewProperties;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView;
@property(readonly, nonatomic) UIView *view; // @synthesize view;
@property(nonatomic) __weak id <WEPopoverControllerDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) unsigned long long popoverArrowDirection; // @synthesize popoverArrowDirection;
@property(nonatomic) struct CGSize popoverContentSize; // @synthesize popoverContentSize;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPopoverVisible) _Bool popoverVisible; // @synthesize popoverVisible;
- (void)viewWasTouched:(id)arg1;
- (void)repositionPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)repositionPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (_Bool)forwardAppearanceMethods;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)init;
- (id)defaultContainerViewProperties;
- (struct CGRect)displayAreaForView:(id)arg1;
- (void)dismissPopoverAnimated:(_Bool)arg1 userInitiated:(_Bool)arg2;
- (void)updateBackgroundPassthroughViews;
- (void)setView:(id)arg1;
- (id)keyView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

