//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString, NVModelBaseTAButton;

@interface NVModelBaseTAShopDetail : NVBaseModel
{
    NVModelBaseTAButton *_activity;
    NSString *_title;
    NSString *_tips;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NVModelBaseTAButton *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;

@end

