//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString, NVModelBasePair;

@interface NVModelBaseWalletItem : NVBaseModel
{
    NSString *_icon;
    NSString *_subTitle;
    NSString *_title;
    NSString *_num;
    NSString *_url;
    NVModelBasePair *_pair;
}

+ (id)metaInfo;
@property(retain, nonatomic) NVModelBasePair *pair; // @synthesize pair=_pair;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

