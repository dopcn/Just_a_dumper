//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseWorthTopic : NVBaseModel
{
    NSString *_link;
    NSString *_detail;
    NSString *_picUrl;
    NSString *_subTitle;
    NSString *_title;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
- (void).cxx_destruct;

@end

