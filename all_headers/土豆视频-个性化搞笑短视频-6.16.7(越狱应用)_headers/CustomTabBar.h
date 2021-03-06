//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol CustomTabBarDelegate;

@interface CustomTabBar : UIView
{
    long long _selectedIndex;
    id <CustomTabBarDelegate> _delegateed;
    UIView *_centerView;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(nonatomic) __weak id <CustomTabBarDelegate> delegateed; // @synthesize delegateed=_delegateed;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTabBarButton:(id)arg1 title:(id)arg2 animated:(_Bool)arg3;
- (id)barButtonAtIndex:(long long)arg1;
- (void)handleButtonAction:(id)arg1;
- (void)addChildTabBarButton:(id)arg1 color:(id)arg2 selectedColor:(id)arg3;
- (void)addChildTabBarButton:(id)arg1;
- (void)setFrameWithCenter;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

