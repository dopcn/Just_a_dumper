//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BMStoryViewDelegate-Protocol.h"

@class BMStoryView, NSString, UIPageControl;

@interface BMStageView : UIView <BMStoryViewDelegate>
{
    BMStoryView *_storyView;
    UIPageControl *_pageControl;
}

@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) BMStoryView *storyView; // @synthesize storyView=_storyView;
- (void).cxx_destruct;
- (void)storyViewScrollToIndex:(long long)arg1;
- (void)startAnimation;
- (void)addKeyFrameView:(id)arg1;
- (void)addPageControl:(id)arg1;
- (void)pcOpaqueNotify:(id)arg1;
- (void)freezeNotify:(id)arg1;
- (void)setupUI;
- (void)initSetup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

