//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CompanysProductModel : NSObject
{
    NSString *_strProductName;
    NSString *_strImageUrl;
    NSString *_strPrice;
    NSString *_strPKId;
    NSString *_strCityContent;
}

@property(retain, nonatomic) NSString *strCityContent; // @synthesize strCityContent=_strCityContent;
@property(retain, nonatomic) NSString *strPKId; // @synthesize strPKId=_strPKId;
@property(retain, nonatomic) NSString *strPrice; // @synthesize strPrice=_strPrice;
@property(retain, nonatomic) NSString *strImageUrl; // @synthesize strImageUrl=_strImageUrl;
@property(retain, nonatomic) NSString *strProductName; // @synthesize strProductName=_strProductName;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

