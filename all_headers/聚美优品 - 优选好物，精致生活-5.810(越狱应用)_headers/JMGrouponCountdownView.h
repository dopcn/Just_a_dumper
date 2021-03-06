//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JMGroupCountDownMiddleView, UIImageView, UILabel;
@protocol JMGrouponCountdownViewDelegate;

@interface JMGrouponCountdownView : UIView
{
    id <JMGrouponCountdownViewDelegate> _delegate;
    long long _totalSeconds;
    UILabel *_titleLabel;
    UIImageView *_leftLineView;
    JMGroupCountDownMiddleView *_middleView;
    UIImageView *_rightLineView;
}

@property(retain, nonatomic) UIImageView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) JMGroupCountDownMiddleView *middleView; // @synthesize middleView=_middleView;
@property(retain, nonatomic) UIImageView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long totalSeconds; // @synthesize totalSeconds=_totalSeconds;
@property(nonatomic) __weak id <JMGrouponCountdownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addChildViews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

