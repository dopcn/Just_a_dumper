//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMHomeBillDetailPageViewModel.h"

@class NSMutableArray;

@interface CMBaiTiaoDetailPageViewModel : CMHomeBillDetailPageViewModel
{
    NSMutableArray *_allBillsArray;
    NSMutableArray *_unpayBillsArray;
    unsigned long long _baiTiaoDetailType;
}

@property(nonatomic) unsigned long long baiTiaoDetailType; // @synthesize baiTiaoDetailType=_baiTiaoDetailType;
@property(retain, nonatomic) NSMutableArray *unpayBillsArray; // @synthesize unpayBillsArray=_unpayBillsArray;
@property(retain, nonatomic) NSMutableArray *allBillsArray; // @synthesize allBillsArray=_allBillsArray;
- (void).cxx_destruct;
- (void)updateBillsDetailWithModels:(id)arg1 WithSuccessBlock:(CDUnknownBlockType)arg2;
- (void)updateBillDetailWithModel:(id)arg1 WithSuccessBlock:(CDUnknownBlockType)arg2;
- (void)updateBaiTiaoBillDetailFromServerWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)updateBaiTiaoBillDetailFromLocalWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)updateUserBankModelFromLocal;
- (_Bool)isCurrBillAccountLineStillExist;
- (id)fetchLongTypeCardInfoString;

@end

