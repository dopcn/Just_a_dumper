//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAModel.h"

@class NSArray;
@protocol FALCPurchaseFlowHistoryModel;

@interface FALCPurchaseFlowHistoryList : FAModel
{
    unsigned long long _total;
    NSArray<FALCPurchaseFlowHistoryModel> *_list;
}

@property(retain, nonatomic) NSArray<FALCPurchaseFlowHistoryModel> *list; // @synthesize list=_list;
@property(nonatomic) unsigned long long total; // @synthesize total=_total;
- (void).cxx_destruct;

@end

