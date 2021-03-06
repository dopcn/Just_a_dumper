//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class HomePageMoreReminderView, NSTimer, QZRedPointView, UIView;

@interface QZHomePageTableViewReminderFooterView : UIButton
{
    long long currentIndex;
    NSTimer *timer;
    UIView *reminderView;
    QZRedPointView *_redPointView;
    _Bool _isScrollAnimating;
    HomePageMoreReminderView *_homePageMoreReminderView;
    UIView *_homePageNewReminderView;
}

@property(nonatomic) _Bool isScrollAnimating; // @synthesize isScrollAnimating=_isScrollAnimating;
@property(retain, nonatomic) UIView *homePageNewReminderView; // @synthesize homePageNewReminderView=_homePageNewReminderView;
@property(retain, nonatomic) HomePageMoreReminderView *homePageMoreReminderView; // @synthesize homePageMoreReminderView=_homePageMoreReminderView;
- (void).cxx_destruct;
- (void)clearRedCommInfo;
- (void)setRedCommInfo:(id)arg1;
- (void)scrollReminderView;
- (id)newFunctionalityReminderView;
- (void)stopScrollAnimation;
- (void)startScrollAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

