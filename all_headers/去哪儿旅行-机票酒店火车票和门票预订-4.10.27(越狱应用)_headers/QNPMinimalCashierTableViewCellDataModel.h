//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface QNPMinimalCashierTableViewCellDataModel : NSObject
{
    _Bool _valid;
    _Bool _needBottomLine;
    _Bool _isSelected;
    NSString *_mainTitle;
    NSString *_subTitle;
    NSString *_alertTip;
    long long _cellType;
    NSString *_iden;
    long long _commonIndex;
    NSMutableArray *_reductTips;
    NSString *_applePayImg;
}

@property(retain, nonatomic) NSString *applePayImg; // @synthesize applePayImg=_applePayImg;
@property(retain, nonatomic) NSMutableArray *reductTips; // @synthesize reductTips=_reductTips;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long commonIndex; // @synthesize commonIndex=_commonIndex;
@property(retain, nonatomic) NSString *iden; // @synthesize iden=_iden;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) _Bool needBottomLine; // @synthesize needBottomLine=_needBottomLine;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSString *alertTip; // @synthesize alertTip=_alertTip;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
- (void).cxx_destruct;

@end

