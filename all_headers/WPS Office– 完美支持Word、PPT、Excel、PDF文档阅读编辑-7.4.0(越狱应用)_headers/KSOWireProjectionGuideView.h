//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KWGuideScrollViewDelegate-Protocol.h"

@class KWGuideScrollView, NSArray, NSString, NSTimer, UIButton;

@interface KSOWireProjectionGuideView : UIView <KWGuideScrollViewDelegate>
{
    UIView *_containerView;
    UIButton *_knowButton;
    KWGuideScrollView *_guideView;
    NSArray *_pictures;
    NSArray *_titles;
    NSTimer *_timer;
    long long _preIndex;
    long long _currentIndex;
    long long _nextIndex;
    _Bool _isScanbanner;
    CDUnknownBlockType _knowDataLineButtonAction;
    CDUnknownBlockType _closeAction;
}

@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) CDUnknownBlockType knowDataLineButtonAction; // @synthesize knowDataLineButtonAction=_knowDataLineButtonAction;
- (void).cxx_destruct;
- (void)addScrollAnimationInLayer:(id)arg1;
- (void)guideView:(id)arg1 willShowPage:(id)arg2 ofPageIndex:(long long)arg3;
- (void)tapAction:(id)arg1;
- (void)scrollViewBeginDragging;
- (void)closeAction:(id)arg1;
- (void)knowDataLineAction:(id)arg1;
- (void)hide;
- (void)createScrollViewDataSource;
- (void)showInView:(id)arg1;
- (void)show;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

