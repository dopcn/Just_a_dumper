//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface MLConnectPKResultView : UIView
{
    CDUnknownBlockType _oneMoreButtonHandler;
    UIImageView *_hostResulImageView;
    UIButton *_oneMoreButton;
    UIImageView *_slaveResulImageView;
}

@property(retain, nonatomic) UIImageView *slaveResulImageView; // @synthesize slaveResulImageView=_slaveResulImageView;
@property(retain, nonatomic) UIButton *oneMoreButton; // @synthesize oneMoreButton=_oneMoreButton;
@property(retain, nonatomic) UIImageView *hostResulImageView; // @synthesize hostResulImageView=_hostResulImageView;
@property(copy, nonatomic) CDUnknownBlockType oneMoreButtonHandler; // @synthesize oneMoreButtonHandler=_oneMoreButtonHandler;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hideResultImage;
- (void)setupUIWithType:(unsigned long long)arg1;
- (void)oneMoreButtonClicked;
- (void)setupLayout;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

