//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SNUIImageView, UIButton, UILabel;

@interface SNO2ONavigationView : UIView
{
    CDUnknownBlockType _callBack;
    UIView *_SNO2ObarItem;
    NSString *_titleContent;
    UILabel *_titleLbl;
    UIButton *_backBtn;
    SNUIImageView *_lineImageView;
}

@property(retain, nonatomic) SNUIImageView *lineImageView; // @synthesize lineImageView=_lineImageView;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) NSString *titleContent; // @synthesize titleContent=_titleContent;
@property(retain, nonatomic) UIView *SNO2ObarItem; // @synthesize SNO2ObarItem=_SNO2ObarItem;
- (void).cxx_destruct;
- (void)backBtnClicked;
- (void)setBackCall:(CDUnknownBlockType)arg1;
- (id)init;

@end

