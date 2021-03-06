//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface SGSSyncWaitingView : UIImageView
{
    UIActivityIndicatorView *_activityView;
    UILabel *_labelTitle;
    UIView *_lineView1;
    UIView *_lineView2;
    UIButton *_buttonLeft;
    UIButton *_buttonRight;
    unsigned long long _syncState;
}

@property(nonatomic) unsigned long long syncState; // @synthesize syncState=_syncState;
- (void).cxx_destruct;
- (void)addButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

