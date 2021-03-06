//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ALAGameLiveSecondFansContentViewDelegate-Protocol.h"
#import "TBCScrollMenuViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ALAGameLiveSecondFansContentView, ALALiveRankMenuView, ALALiveRankScrollView, NSString, UITapGestureRecognizer;
@protocol ALAGameLiveMainFansViewDelegate;

@interface ALAGameLiveMainFansView : UIView <UIGestureRecognizerDelegate, TBCScrollMenuViewDelegate, UIScrollViewDelegate, ALAGameLiveSecondFansContentViewDelegate>
{
    id <ALAGameLiveMainFansViewDelegate> _delegate;
    NSString *_userId;
    UITapGestureRecognizer *_tapGesture;
    UIView *_backgroundMaskView;
    ALALiveRankMenuView *_menuView;
    UIView *_divideLine;
    ALALiveRankScrollView *_scrollView;
    ALAGameLiveSecondFansContentView *_fansContentView;
    ALAGameLiveSecondFansContentView *_followContentView;
    ALAGameLiveSecondFansContentView *_backPlayContentView;
    long long _currentIndex;
    NSString *_fansType;
}

@property(retain, nonatomic) NSString *fansType; // @synthesize fansType=_fansType;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) ALAGameLiveSecondFansContentView *backPlayContentView; // @synthesize backPlayContentView=_backPlayContentView;
@property(retain, nonatomic) ALAGameLiveSecondFansContentView *followContentView; // @synthesize followContentView=_followContentView;
@property(retain, nonatomic) ALAGameLiveSecondFansContentView *fansContentView; // @synthesize fansContentView=_fansContentView;
@property(retain, nonatomic) ALALiveRankScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) ALALiveRankMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) __weak id <ALAGameLiveMainFansViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)liveFansViewDidClickItem:(id)arg1;
- (void)didSelectTag:(long long)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)goToAssignRankType:(id)arg1;
- (void)showInView:(id)arg1 isGame:(_Bool)arg2 atIndex:(long long)arg3;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

