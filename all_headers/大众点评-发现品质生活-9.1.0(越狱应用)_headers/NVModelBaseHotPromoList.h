//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseHotPromoList : NVBaseModel
{
    NSString *_subtitle;
    NSArray *_hotPromos;
    NSString *_title;
    NSString *_url;
    long long _count;
}

+ (id)metaInfo;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *hotPromos; // @synthesize hotPromos=_hotPromos;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (void).cxx_destruct;

@end

