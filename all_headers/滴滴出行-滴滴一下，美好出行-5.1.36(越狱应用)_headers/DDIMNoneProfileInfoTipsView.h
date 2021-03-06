//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol DDIMNoneProfileInfoTipsViewDelegate;

@interface DDIMNoneProfileInfoTipsView : UIView
{
    id <DDIMNoneProfileInfoTipsViewDelegate> _delegate;
    UIImageView *_tipsImageView;
    UILabel *_tipsTextLabel;
    UILabel *_subTextLabel;
    UIButton *_bkButton;
}

@property(retain, nonatomic) UIButton *bkButton; // @synthesize bkButton=_bkButton;
@property(retain, nonatomic) UILabel *subTextLabel; // @synthesize subTextLabel=_subTextLabel;
@property(retain, nonatomic) UILabel *tipsTextLabel; // @synthesize tipsTextLabel=_tipsTextLabel;
@property(retain, nonatomic) UIImageView *tipsImageView; // @synthesize tipsImageView=_tipsImageView;
@property(nonatomic) __weak id <DDIMNoneProfileInfoTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeToFits;
- (void)tipsButtonPressed;
- (void)layoutSubviews;
- (void)configView;
- (id)init;

@end

