//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NMCarPathTipsViewModel : NSObject
{
    _Bool _canShowDetail;
    _Bool _hasLeftAccessory;
    float _rank;
    NSString *_title;
    NSString *_subTitle;
    NSString *_confirmButtonTitle;
    long long _countDownTime;
    unsigned long long _style;
    id _originalData;
}

@property(nonatomic) _Bool hasLeftAccessory; // @synthesize hasLeftAccessory=_hasLeftAccessory;
@property(retain, nonatomic) id originalData; // @synthesize originalData=_originalData;
@property(nonatomic) float rank; // @synthesize rank=_rank;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool canShowDetail; // @synthesize canShowDetail=_canShowDetail;
@property(nonatomic) long long countDownTime; // @synthesize countDownTime=_countDownTime;
@property(retain, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)tipsTypeStringForBehaviorLog;
- (id)init;

@end

