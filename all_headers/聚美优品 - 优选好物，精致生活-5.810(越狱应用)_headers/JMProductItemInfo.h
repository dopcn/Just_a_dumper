//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONBaseModel.h"

@class NSDate, NSString;

@interface JMProductItemInfo : JSONBaseModel
{
    unsigned long long _productType;
    unsigned long long _sellingFormType;
    NSString *_itemId;
    NSString *_dateString;
    NSString *_typeString;
    NSDate *_date;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) unsigned long long sellingFormType; // @synthesize sellingFormType=_sellingFormType;
@property(nonatomic) unsigned long long productType; // @synthesize productType=_productType;
- (void).cxx_destruct;
- (void)setSellingFormTypeWithNSString:(id)arg1;
- (void)setProductTypeWithNSString:(id)arg1;

@end

