//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSMutableArray, NSString;
@protocol JMGoodsDetailPromotionCounterInfo;

@interface JMGoodsDetailPromotionCounterList : JSONModel
{
    NSString *_title;
    NSString *_page_count;
    NSString *_page_number;
    NSString *_row_count;
    NSString *_rows_per_page;
    NSMutableArray<JMGoodsDetailPromotionCounterInfo> *_items;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSMutableArray<JMGoodsDetailPromotionCounterInfo> *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *rows_per_page; // @synthesize rows_per_page=_rows_per_page;
@property(copy, nonatomic) NSString *row_count; // @synthesize row_count=_row_count;
@property(copy, nonatomic) NSString *page_number; // @synthesize page_number=_page_number;
@property(copy, nonatomic) NSString *page_count; // @synthesize page_count=_page_count;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

