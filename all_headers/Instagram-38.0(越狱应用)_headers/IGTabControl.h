//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGKeyboardObserverShowDelegate-Protocol.h"

@class CALayer, IGKVOHandle, IGKeyboardObserver, NSArray, NSString, UIScrollView;
@protocol IGTabControlDelegate;

@interface IGTabControl : UIView <IGKeyboardObserverShowDelegate>
{
    _Bool _canUseFallbackIcons;
    UIView *_inchwormView;
    NSArray *_buttons;
    id <IGTabControlDelegate> _delegate;
    UIScrollView *_connectedScrollView;
    NSString *_title;
    long long _style;
    IGKVOHandle *_contentOffsetHandle;
    CALayer *_bottomSeparator;
    long long _tappedIndex;
    IGKeyboardObserver *_keyboardObserver;
}

+ (double)preferredHeight;
@property(readonly, nonatomic) _Bool canUseFallbackIcons; // @synthesize canUseFallbackIcons=_canUseFallbackIcons;
@property(readonly, nonatomic) IGKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(nonatomic) long long tappedIndex; // @synthesize tappedIndex=_tappedIndex;
@property(retain, nonatomic) CALayer *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) IGKVOHandle *contentOffsetHandle; // @synthesize contentOffsetHandle=_contentOffsetHandle;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIScrollView *connectedScrollView; // @synthesize connectedScrollView=_connectedScrollView;
@property(nonatomic) __weak id <IGTabControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (struct UIEdgeInsets)contentInsets;
- (void)layoutSubviews;
- (void)onSegmentTapped:(id)arg1;
- (void)updateAccessibilityStateForButtons:(id)arg1 selectedIndex:(long long)arg2;
- (void)updateScrollViewPosition;
- (void)highlightVisibleSegment;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSegments:(id)arg1;
@property(readonly, nonatomic) UIView *inchwormView; // @synthesize inchwormView=_inchwormView;
- (struct CGRect)scrollIndicatorBarFrameForScrollView:(id)arg1;
- (id)tabSegmentFont;
- (void)applyStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

