//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTRootView.h"

@class CTHomeTabBarItem, LOTAnimationView, NSLayoutConstraint, UIButton, UIColor, UIImage, UIImageView;
@protocol CTHomeTabBarViewDelegate;

@interface CTHomeTabBarView : CTRootView
{
    UIImage *homeTabImage_normal;
    UIImage *homeTabImage_highlight;
    UIColor *homeTabColor_normal;
    UIColor *homeTabColor_highlight;
    UIImage *scheduleTabImage_normal;
    UIImage *scheduleTabImage_highlight;
    UIColor *scheduleTabColor_normal;
    UIColor *scheduleTabColor_highlight;
    UIImage *callcenterTabImage_normal;
    UIImage *callcenterTabImage_highlight;
    UIColor *callcenterTabColor_normal;
    UIColor *callcenterTabColor_highlight;
    UIImage *myctripTabImage_normal;
    UIImage *myctripTabImage_highlight;
    UIColor *myctripTabColor_normal;
    UIColor *myctripTabColor_highlight;
    UIImage *discoverTabImage_normal;
    UIImage *discoverTabImage_highlight;
    UIColor *discoverTabColor_normal;
    UIColor *discoverTabColor_highlight;
    long long currentSelectedIndex;
    _Bool _homeTabCanAni;
    _Bool _scheduleTabCanAni;
    _Bool _discoverTabCanAni;
    _Bool _callcenterTabCanAni;
    _Bool _myctripTabCanAni;
    _Bool _firstHomeWhenLaunch;
    id <CTHomeTabBarViewDelegate> delegate;
    CTHomeTabBarItem *_homeItem;
    CTHomeTabBarItem *_tripScheduleItem;
    CTHomeTabBarItem *_callcenterItem;
    CTHomeTabBarItem *_myctripItem;
    CTHomeTabBarItem *_discoverItem;
    UIImageView *_discoverNewIcon;
    UIButton *_tabAdBtn;
    NSLayoutConstraint *_midTabWidthConstraint;
    LOTAnimationView *_tabAnimationView;
    NSLayoutConstraint *_homeTabToBottomConstraint;
    NSLayoutConstraint *_scheduleTabToBottomConstraint;
    NSLayoutConstraint *_tabADToBottomConstraint;
    NSLayoutConstraint *_discoverTabToBottomConstraint;
    NSLayoutConstraint *_callcenterTabToBottomConstraint;
    NSLayoutConstraint *_myctripTabToBottomConstraint;
}

@property(nonatomic) _Bool firstHomeWhenLaunch; // @synthesize firstHomeWhenLaunch=_firstHomeWhenLaunch;
@property(nonatomic) _Bool myctripTabCanAni; // @synthesize myctripTabCanAni=_myctripTabCanAni;
@property(nonatomic) _Bool callcenterTabCanAni; // @synthesize callcenterTabCanAni=_callcenterTabCanAni;
@property(nonatomic) _Bool discoverTabCanAni; // @synthesize discoverTabCanAni=_discoverTabCanAni;
@property(nonatomic) _Bool scheduleTabCanAni; // @synthesize scheduleTabCanAni=_scheduleTabCanAni;
@property(nonatomic) _Bool homeTabCanAni; // @synthesize homeTabCanAni=_homeTabCanAni;
@property(nonatomic) __weak NSLayoutConstraint *myctripTabToBottomConstraint; // @synthesize myctripTabToBottomConstraint=_myctripTabToBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *callcenterTabToBottomConstraint; // @synthesize callcenterTabToBottomConstraint=_callcenterTabToBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *discoverTabToBottomConstraint; // @synthesize discoverTabToBottomConstraint=_discoverTabToBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tabADToBottomConstraint; // @synthesize tabADToBottomConstraint=_tabADToBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *scheduleTabToBottomConstraint; // @synthesize scheduleTabToBottomConstraint=_scheduleTabToBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *homeTabToBottomConstraint; // @synthesize homeTabToBottomConstraint=_homeTabToBottomConstraint;
@property(retain, nonatomic) LOTAnimationView *tabAnimationView; // @synthesize tabAnimationView=_tabAnimationView;
@property(retain, nonatomic) NSLayoutConstraint *midTabWidthConstraint; // @synthesize midTabWidthConstraint=_midTabWidthConstraint;
@property(retain, nonatomic) UIButton *tabAdBtn; // @synthesize tabAdBtn=_tabAdBtn;
@property(retain, nonatomic) UIImageView *discoverNewIcon; // @synthesize discoverNewIcon=_discoverNewIcon;
@property(retain, nonatomic) CTHomeTabBarItem *discoverItem; // @synthesize discoverItem=_discoverItem;
@property(retain, nonatomic) CTHomeTabBarItem *myctripItem; // @synthesize myctripItem=_myctripItem;
@property(retain, nonatomic) CTHomeTabBarItem *callcenterItem; // @synthesize callcenterItem=_callcenterItem;
@property(retain, nonatomic) CTHomeTabBarItem *tripScheduleItem; // @synthesize tripScheduleItem=_tripScheduleItem;
@property(retain, nonatomic) CTHomeTabBarItem *homeItem; // @synthesize homeItem=_homeItem;
@property(nonatomic) id <CTHomeTabBarViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)replaceTabBar:(long long)arg1 normalImage:(id)arg2 normalColor:(id)arg3 highlightImage:(id)arg4 highlightColor:(id)arg5;
- (void)switchToActivityVersion:(_Bool)arg1;
- (void)pressTabBtn:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)animationWithSelectIndex:(long long)arg1;
- (void)allTabResetNormal;
- (void)contineUpdateTabbarStatus:(long long)arg1;
- (void)updateTabbarStatus:(long long)arg1;
- (void)initData;
- (void)awakeFromNib;

@end

