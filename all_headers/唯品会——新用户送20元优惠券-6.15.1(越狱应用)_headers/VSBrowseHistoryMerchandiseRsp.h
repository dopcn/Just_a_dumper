//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSDictionary, NSNumber;
@protocol Optional><VSBrowseHistoryMerchandiseModel;

@interface VSBrowseHistoryMerchandiseRsp : JSONModel
{
    NSArray<Optional><VSBrowseHistoryMerchandiseModel> *_productList;
    NSNumber *_showStockThreshold;
    NSDictionary *_iconUrlMapping;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSDictionary *iconUrlMapping; // @synthesize iconUrlMapping=_iconUrlMapping;
@property(copy, nonatomic) NSNumber *showStockThreshold; // @synthesize showStockThreshold=_showStockThreshold;
@property(copy, nonatomic) NSArray<Optional><VSBrowseHistoryMerchandiseModel> *productList; // @synthesize productList=_productList;
- (void).cxx_destruct;

@end

