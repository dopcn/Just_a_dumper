//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface CCB_6_SelectProvinceItem : NSObject
{
    NSString *_PROV_NAME;
    NSString *_PROV_CODE;
    NSMutableArray *_CITY_INFOS;
}

+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSMutableArray *CITY_INFOS; // @synthesize CITY_INFOS=_CITY_INFOS;
@property(retain, nonatomic) NSString *PROV_CODE; // @synthesize PROV_CODE=_PROV_CODE;
@property(retain, nonatomic) NSString *PROV_NAME; // @synthesize PROV_NAME=_PROV_NAME;
- (void).cxx_destruct;

@end

