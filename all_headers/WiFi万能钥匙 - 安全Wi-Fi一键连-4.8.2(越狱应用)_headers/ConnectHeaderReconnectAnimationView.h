//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, WKReconnectAnimatedView;

@interface ConnectHeaderReconnectAnimationView : UIView
{
    WKReconnectAnimatedView *animationView;
    double animationViewHeight;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startSuccessAnimation;
- (void)startAnimationWithTitleString:(id)arg1;
- (void)setup_view;
- (id)init;

@end

