//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UILabel;

@interface FHSpaceView : UIView
{
    UILabel *_totalLabel;
    UILabel *_usedLabel;
    UIView *_progressView;
    UIButton *_settingButton;
    UIView *_totalProgressView;
    NSLayoutConstraint *_progressConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *progressConstraint; // @synthesize progressConstraint=_progressConstraint;
@property(nonatomic) __weak UIView *totalProgressView; // @synthesize totalProgressView=_totalProgressView;
@property(nonatomic) __weak UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(nonatomic) __weak UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UILabel *usedLabel; // @synthesize usedLabel=_usedLabel;
@property(nonatomic) __weak UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
- (void).cxx_destruct;
- (void)configureSpaceWithUsedSize:(double)arg1 totalSize:(double)arg2;
- (void)awakeFromNib;

@end

