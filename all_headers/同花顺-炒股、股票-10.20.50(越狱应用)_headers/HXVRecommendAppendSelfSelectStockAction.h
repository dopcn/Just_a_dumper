//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HXVRecommendAppendAbstractAction.h"

@class NSArray;

@interface HXVRecommendAppendSelfSelectStockAction : HXVRecommendAppendAbstractAction
{
    long long _lastIndex;
    NSArray *_stockList;
}

@property(copy, nonatomic) NSArray *stockList; // @synthesize stockList=_stockList;
@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
- (void).cxx_destruct;
- (void)pageup;
- (id)randomArray:(id)arg1;
- (void)appendStockListWithArrayData:(id)arg1;
- (void)appendWithData:(id)arg1;
- (id)init;

@end

