//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray, NSString;
@protocol AliDetailProductRelateModel;

@interface AliDetailRelateAuctionsComponentModel : AliDetailComponentModel
{
    NSArray<AliDetailProductRelateModel> *_items;
    NSString *_title;
}

+ (_Bool)childFilter:(id)arg1 layoutModel:(id)arg2;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray<AliDetailProductRelateModel> *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end

