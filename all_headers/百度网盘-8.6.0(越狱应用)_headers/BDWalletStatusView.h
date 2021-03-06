//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface BDWalletStatusView : UIView
{
    unsigned long long _currentStatus;
    UIButton *_statusBtn;
    NSString *_msg;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_imageView;
}

+ (id)view;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(readonly, nonatomic) UIButton *statusBtn; // @synthesize statusBtn=_statusBtn;
@property(readonly, nonatomic) unsigned long long currentStatus; // @synthesize currentStatus=_currentStatus;
- (void).cxx_destruct;
- (id)detailText;
- (id)imageName;
- (id)titleLabelText;
- (id)statusButtonTitle;
- (void)reloadStatus:(unsigned long long)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

