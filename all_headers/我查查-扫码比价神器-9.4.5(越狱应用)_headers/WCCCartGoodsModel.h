//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCCartGoodsModel : NSObject
{
    _Bool _bOver;
    _Bool _bSelected;
    NSString *_strGoodsID;
    NSString *_strGoodsName;
    NSString *_strPrice;
    NSString *_strProperty;
    NSString *_strImgURL;
    long long _iCount;
    long long _iStockCount;
}

@property(nonatomic) _Bool bSelected; // @synthesize bSelected=_bSelected;
@property(nonatomic) long long iStockCount; // @synthesize iStockCount=_iStockCount;
@property(nonatomic) long long iCount; // @synthesize iCount=_iCount;
@property(nonatomic) _Bool bOver; // @synthesize bOver=_bOver;
@property(retain, nonatomic) NSString *strImgURL; // @synthesize strImgURL=_strImgURL;
@property(retain, nonatomic) NSString *strProperty; // @synthesize strProperty=_strProperty;
@property(retain, nonatomic) NSString *strPrice; // @synthesize strPrice=_strPrice;
@property(retain, nonatomic) NSString *strGoodsName; // @synthesize strGoodsName=_strGoodsName;
@property(retain, nonatomic) NSString *strGoodsID; // @synthesize strGoodsID=_strGoodsID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

