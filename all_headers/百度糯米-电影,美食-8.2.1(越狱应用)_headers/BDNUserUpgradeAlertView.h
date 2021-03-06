//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol BDNUserUpgradeAlertViewDelegate;

@interface BDNUserUpgradeAlertView : UIView
{
    id <BDNUserUpgradeAlertViewDelegate> _delegate;
    UIView *_mainContainerView;
    UIImageView *_defaultImageBG;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIImageView *_VIPLevelImageView;
    UIButton *_membersButton;
    UIButton *_vouchersButton;
    UILabel *_vouchersLabel;
}

@property(retain, nonatomic) UILabel *vouchersLabel; // @synthesize vouchersLabel=_vouchersLabel;
@property(retain, nonatomic) UIButton *vouchersButton; // @synthesize vouchersButton=_vouchersButton;
@property(retain, nonatomic) UIButton *membersButton; // @synthesize membersButton=_membersButton;
@property(retain, nonatomic) UIImageView *VIPLevelImageView; // @synthesize VIPLevelImageView=_VIPLevelImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *defaultImageBG; // @synthesize defaultImageBG=_defaultImageBG;
@property(retain, nonatomic) UIView *mainContainerView; // @synthesize mainContainerView=_mainContainerView;
@property(nonatomic) __weak id <BDNUserUpgradeAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)singleTapHandle:(id)arg1;
- (void)vouchersButtonClicked:(id)arg1;
- (void)membersButtonClicked:(id)arg1;
- (void)closeAlertView:(id)arg1;
- (void)close;
- (void)show;
- (id)initWithModel:(id)arg1 andDelegate:(id)arg2;
- (id)init;

@end

