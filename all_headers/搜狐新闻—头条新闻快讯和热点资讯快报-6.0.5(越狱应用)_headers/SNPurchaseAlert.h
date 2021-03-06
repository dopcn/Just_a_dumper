//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SNPurchaseAlert : UIView
{
    UILabel *_titleLabel;
    UIImageView *_selectIAP;
    UIImageView *_selectBal;
    unsigned long long *_purchaseModel;
    UIView *_backMask;
    CDUnknownBlockType _cancelEventBlock;
    CDUnknownBlockType _goOnEventBlock;
}

+ (void)alertWithPrice:(id)arg1 cancelButtonEvent:(CDUnknownBlockType)arg2 goOnButtonEvent:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType goOnEventBlock; // @synthesize goOnEventBlock=_goOnEventBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelEventBlock; // @synthesize cancelEventBlock=_cancelEventBlock;
@property(retain, nonatomic) UIView *backMask; // @synthesize backMask=_backMask;
@property(nonatomic) unsigned long long *purchaseModel; // @synthesize purchaseModel=_purchaseModel;
@property(retain, nonatomic) UIImageView *selectBal; // @synthesize selectBal=_selectBal;
@property(retain, nonatomic) UIImageView *selectIAP; // @synthesize selectIAP=_selectIAP;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)go:(id)arg1;
- (void)cancel:(id)arg1;
- (void)selectIAP:(id)arg1;
- (void)selectBal:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dismiss;
- (void)alert;

@end

