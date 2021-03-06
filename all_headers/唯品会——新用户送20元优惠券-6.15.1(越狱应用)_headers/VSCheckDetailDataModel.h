//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VSCheckDetailDataModelProtocol-Protocol.h"

@class NSArray, NSString, VSCheckOutDetailViewModel;

@interface VSCheckDetailDataModel : NSObject <VSCheckDetailDataModelProtocol>
{
    VSCheckOutDetailViewModel *_detailDataModel;
    NSString *_title;
    NSString *_detail;
    long long _detailStyle;
    NSString *_arrivalDesc;
    NSArray *_giftInfos;
}

+ (id)detailViewModelWithTitle:(id)arg1 detail:(id)arg2;
@property(retain, nonatomic) NSArray *giftInfos; // @synthesize giftInfos=_giftInfos;
@property(copy, nonatomic) NSString *arrivalDesc; // @synthesize arrivalDesc=_arrivalDesc;
@property(nonatomic) long long detailStyle; // @synthesize detailStyle=_detailStyle;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak VSCheckOutDetailViewModel *detailDataModel; // @synthesize detailDataModel=_detailDataModel;
- (void).cxx_destruct;
- (struct CGSize)constraintSizeWithFont:(id)arg1 content:(id)arg2 constraintedWidth:(double)arg3;
- (long long)cellHeight;
- (id)initWithCartOrder:(id)arg1 showFreight:(_Bool)arg2;
- (id)cellClsName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

